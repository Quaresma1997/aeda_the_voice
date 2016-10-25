#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
using namespace std;

//menus

void cabecalho_menu()
{
	cout <<endl<<	" TTTTTTT  H     H  EEEEEEE       V        V    OOOO    IIIIIII   CCCCC EEEEEEE\n";
	cout << "   TTT    H     H  E              V      V   OO    OO    III   CC      E\n";
	cout << "   TTT    H HHH H  EEEE            V    V    OO    OO    III   CC      EEEE\n";
	cout << "   TTT    H     H  E                V  V     OO    OO    III   CC      E\n";
	cout << "   TTT    H     H  EEEEEEE           VV        OOOO    IIIIIII   CCCCC EEEEEEE\n"<<endl;
}

//para edicoes

unsigned int getNumEdicao()
{
	unsigned int id;
	ifstream fi("edicoes.txt");
	if(!fi)
	{
		//lanca excecao
	}
	if(file_is_empty(fi))
	{

		return 1;
	}
	else
	{
		while(!fi.eof()) {
			fi>>id;
		}
	}
	return id;
}

//uteis

void trim_strings(string &str)
{
	size_t first = str.find_first_not_of(' ');
	size_t last = str.find_last_not_of(' ');
	str.substr(first, (last-first+1));
}

//trabalhar com ficheiros

bool file_is_empty(ifstream& pFile)
{
	return (pFile.peek() == ifstream::traits_type::eof());
}

void le_ficheiros(The_Voice &TV)
{
	le_ficheiro_musicas(TV);
	le_ficheiro_apresentadores(TV);
	le_ficheiro_mentores(TV);
	le_ficheiro_concorrentes(TV);


	//Controlo de erros ficheiro existe?
}
void le_ficheiro_musicas(The_Voice &TV)
{
	string estilo;

	ifstream fi("musicas.txt");
	string line;
	char c;
	int estilo_id=-1;

	while (getline(fi, line))
	{
		istringstream is;
		is.str(line);
		is >>c;
		if(!isdigit(c))
		{
			is.str(line);

			is>>estilo;
			TV.setEstilos(estilo);


		}
		else
		{
			is.str(line);
			int id;
			string nome;

			is>>id;
			getline(is, nome);


			Musica *m(trim_strings(nome), estilo);
			TV.setEstilos_musicas(estilo,m);
		}

	}

}

void le_ficheiro_apresentadores(The_Voice &TV)
{
	ifstream fi("apresentadores.txt");
	string line;

	while (getline(fi, line))
	{
		istringstream is;
		int id;
		char h1;
		unsigned int idade;
		string nome, loc;
		is.str(line);
		is >>id;
		getline(is, nome, '(');
		is >> idade>>h1;
		getline(is, loc, ')');
Apresentador *h(12, "kaka", "vila");
		Apresentador *a(idade, trim_strings(nome), trim_strings(loc));
		TV.setApresentadores(a);



	}
}

void le_ficheiro_mentores(The_Voice &TV)
{
	ifstream fi("mentores.txt");
	string line;

	while (getline(fi, line))
	{
		istringstream is;
		int id, num_participacoes, num_ed_ganhas;
		char h1;
		unsigned int idade;
		string nome, loc, est1, est2, est3;
		vector <string> estilos;
		is.str(line);
		is >>id;
		getline(is, nome, '(');
		is >> idade>>h1;
		getline(is, loc, ')');
		is>>num_participacoes>>num_ed_ganhas;
		is>>est1>>est2>>est3;
		estilos.push_back(est1);
		estilos.push_back(est2);
		estilos.push_back(est3);

		Mentor *m(idade, nome, loc,num_participacoes,num_ed_ganhas, estilos );
		TV.setMentores(m);



	}
}

void le_ficheiro_concorrentes(The_Voice &TV)
{
	ifstream fi("concorrentes.txt");
	string line;

	while (getline(fi, line))
	{
		istringstream is;
		int id;
		char h1;
		unsigned int idade;
		string nome, loc, musica;

		is.str(line);
		is >>id;
		getline(is, nome, '(');
		is >> idade>>h1;
		getline(is, loc, ')');
		getline(is, musica);

		Concorrente *c(idade, nome, loc, musica);
		TV.setConcorrentes(c);



	}
}
void cria_ficheiro_concorrentes()
{
	/*string line;
	string line_out;
	int aux,c=0;
	int idade;
	string nome, localidade;

	ifstream fi("concorrentes.txt");
if(!fi)
{
	cout << "OHOHO";
}
else
{
	cout <<"BENFICA";
}



	cout << "kkaka";
	while (getline(fi, line)) {

		cout << "jjj";
		c++;
		istringstream is;
		char h1;
		is.str(line);
		is >>aux;

		getline(is, nome, '(');
		is >> idade>>h1;
		getline(is, localidade, ')');


		cout << aux <<nome <<"("<<idade<<","<<localidade<<")"<<endl;

	}

	fi.close();

	 */
}
