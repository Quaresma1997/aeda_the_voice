#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
using namespace std;

void cria_ficheiros()
{
	cria_ficheiro_concorrentes();
}
void cria_ficheiro_concorrentes()
{
	string line;
	string line_out;
	int aux,c=0;
	ifstream fi;
	fi.open("C:\\Users\\Rui Quaresma\\Documents\\eclipse\\the_voice_turma3\\src\\nomes.txt");
	ofstream fo;
	fo.open("concorrentes.txt");hjjhhhs

	while (getline(fi, line)) {

		c++;
		istringstream is;
		char aux2;
		is.str(line);
		is >>aux>> aux2;
		getline(is, line_out);

		fo << c <<" "<< line_out << endl;

	}
	fo.close();
	fi.close();

}

string trim_strings(string &str)
{
	size_t first = str.find_first_not_of(' ');
	size_t last = str.find_last_not_of(' ');
	return str.substr(first, (last-first+1));
}

void cabecalho_menu()
{
	cout <<endl<<	" TTTTTTT  H     H  EEEEEEE       V        V    OOOO    IIIIIII   CCCCC EEEEEEE\n";
		cout << "   TTT    H     H  E              V      V   OO    OO    III   CC      E\n";
		cout << "   TTT    H HHH H  EEEE            V    V    OO    OO    III   CC      EEEE\n";
		cout << "   TTT    H     H  E                V  V     OO    OO    III   CC      E\n";
		cout << "   TTT    H     H  EEEEEEE           VV        OOOO    IIIIIII   CCCCC EEEEEEE\n"<<endl;
}
