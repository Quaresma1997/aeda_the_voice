#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <map>
#include "the_voice.h"
#include <stdlib.h>

using namespace std;

void le_ficheiros(The_Voice &TV);
void le_ficheiro_musicas(The_Voice &TV);
void le_ficheiro_apresentadores(The_Voice &TV);
void le_ficheiro_mentores(The_Voice &TV);
void le_ficheiro_concorrentes(The_Voice &TV);

bool file_is_empty(ifstream& pFile);
void cria_ficheiros();
void cria_ficheiro_concorrentes();
unsigned int getNumEdicao();
string trim_strings(string word);
void cabecalho_menu();

