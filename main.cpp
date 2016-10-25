//============================================================================
// Name        : the_voice_turma3.cpp
// Author      : Rui, Carlos e Luis
// Version     : none
//============================================================================

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include "const.h"
#include "func.h"
#include <fstream>
using namespace std;



int main() {



	cabecalho_menu();



	The_Voice TV1("Lisboa", getNumEdicao());


	le_ficheiros(TV1);

	cout <<"Ap: "<<TV1.getApresentadores().at(0)<<endl;
	cout <<"Mt: "<<TV1.getMentores().at(0)<<endl;
	cout <<"Co: "<<TV1.getConcorrentes().at(0)<<endl;
	cout <<"Mu: "<<TV1.getEstilos_musicas().at("Rock").at(0)<<endl;
	//cria_ficheiros();

	return 0;
}
