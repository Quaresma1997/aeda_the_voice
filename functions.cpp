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

string trim_strings(string &str)
{
	size_t first = str.find_first_not_of(' ');
	size_t last = str.find_last_not_of(' ');
	return str.substr(first, (last-first+1));
}

//trabalhar com ficheiros

bool file_is_empty(ifstream& pFile)
{
	return (pFile.peek() == ifstream::traits_type::eof());
}

void le_ficheiros(The_Voice &TV)
{
	le_ficheiro_musicas(TV);
}
void le_ficheiro_musicas(The_Voice &TV)
{

	vector <string> estilos={"Rock", "Pop", "Fado", "Lirico", "Jazz", "Blues", "R&B", "Reggae"};
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
			estilo_id++;

		}
		else
		{
			is.str(line);
			int id;
			string nome;

			is>>id;
			getline(is, nome);

			Musica *m(nome, estilos.at(estilo_id));
			TV.setMusicas(estilos.at(estilo_id),m);
		}

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
