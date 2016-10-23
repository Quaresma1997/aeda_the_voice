#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <map>
using namespace std;

void le_ficheiros(The_Voice &TV);
void le_ficheiro_musicas(The_Voice &TV);

bool file_is_empty(ifstream& pFile);
void cria_ficheiros();
void cria_ficheiro_concorrentes();
unsigned int getNumEdicao();
void trim_strings();
void cabecalho_menu();

