#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
#include "the_voice.h"
using namespace std;

The_Voice::The_Voice(string lc, unsigned int id):local(lc), id(id)
{

}

unsigned int The_Voice::getID() const
{
	return id;
}

string The_Voice::getLocal() const
{
	return local;
}


void The_Voice::setMusicas(Musica *m)
{
	musicas.push_back(m);
}

void The_Voice::setApresentadores(Apresentador *a)
{
	apresentadores.push_back(a);
}

void The_Voice::setMentores(Mentor *m)
{
	mentores.push_back(m);
}

void The_Voice::setConcorrentes(Concorrente *c)
{
	concorrentes.push_back(c);
}

vector <Concorrente *> The_Voice::getConcorrentes() const
{
	return concorrentes;
}

vector <Apresentador *> The_Voice::getApresentadores() const
{
	return apresentadores;
}

vector <Mentor *> The_Voice::getMentores() const
{
	return mentores;
}

vector <Fase *> The_Voice::getFases() const
{
	return fases;
}

vector<Musica *> The_Voice::getMusicas() const
{
	return musicas;
}
