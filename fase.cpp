#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
#include "fase.h"
using namespace std;


//Fase

unsigned int Fase::ID_FASE_GERAL=1;

Fase::Fase(string nm, int qts, Data* dat):nome(nm), qts_passam_por_equipa(qts), data(dat), id(ID_FASE_GERAL)
{
	ID_FASE_GERAL++;
}

unsigned int Fase::getId() const
{
	return id;
}

string Fase::getNome() const
{
	return nome;
}

int Fase::getQTS_PASSAM() const
{
	return qts_passam_por_equipa;
}

vector <Concorrente *> Fase::getConcorrentes() const
{
	return concorrentes;
}

void Fase::setConcorrentes(Concorrente *c)
{
	concorrentes.push_back(c);
}

