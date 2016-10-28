#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
#include <new>

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

string trim_strings(string word)
{
	int i = 0, j;
	while (word.at(i) == ' ')
	{
		word = word.substr(1);
	}
	j = word.size() - 1;
	while (word.at(j) == ' ')
	{
		word = word.substr(0, j);
		j--;
	}
	return word;
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


	while (getline(fi, line))
	{
		istringstream is;
		is.str(line);
		is >>c;
		if(!isdigit(c))
		{
			is.str(line);

			is>>estilo;
		}
		else
		{
			is.str(line);
			int id;
			string nome;

			is>>id;
			getline(is, nome);


			Musica *m=new Musica(trim_strings(nome), estilo);
			TV.setMusicas(m);
		}

	}
	fi.close();

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
		Apresentador *a=new Apresentador(idade, trim_strings(nome), trim_strings(loc));
		TV.setApresentadores(a);




	}
	fi.close();
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

		Mentor *m=new Mentor(idade, nome, loc,num_participacoes,num_ed_ganhas, estilos );
		TV.setMentores(m);



	}
	fi.close();
}

void le_ficheiro_concorrentes(The_Voice &TV)
{
	ifstream fi("concorrentes.txt");
	string line;

	while (getline(fi, line))
	{
		istringstream is;
		int id, pos_Musica;
		char h1;
		unsigned int idade;
		string nome, loc, musica;

		is.str(line);
		is >>id;
		getline(is, nome, '(');
		is >> idade>>h1;
		getline(is, loc, ')');
		getline(is, musica);



		Musica *m_aux=new Musica(musica, "" );
		pos_Musica=sequentialSearch(TV.getMusicas(), m_aux);
		Concorrente *c=new Concorrente(idade, nome, loc,TV.getMusicas().at(pos_Musica));
		c->setEstilo(TV.getMusicas().at(pos_Musica)->getEstilo());
		c->setQualidade(rand() % 4 +1);
		TV.setConcorrentes(c);



	}
	fi.close();
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
