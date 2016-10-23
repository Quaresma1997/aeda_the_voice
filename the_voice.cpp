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
	vector <Musica *> M_aux;
	estilos_musicas.insert(pair<string,vector <Musica *>>("Rock",M_aux));
	estilos_musicas.insert(pair<string,vector <Musica *>>("Pop",M_aux));
	estilos_musicas.insert(pair<string,vector <Musica *>>("Fado",M_aux));
	estilos_musicas.insert(pair<string,vector <Musica *>>("Lirico",M_aux));
	estilos_musicas.insert(pair<string,vector <Musica *>>("Jazz",M_aux));
	estilos_musicas.insert(pair<string,vector <Musica *>>("Blues",M_aux));
	estilos_musicas.insert(pair<string,vector <Musica *>>("R&B",M_aux));
	estilos_musicas.insert(pair<string,vector <Musica *>>("Reggae",M_aux));
}

unsigned int The_Voice::getID() const
{
	return id;
}

string The_Voice::getLocal() const
{
	return local;
}

void The_Voice::setMusicas(string estilo_pos,Musica *m)
{
	estilos_musicas.at(estilo_pos).push_back(m);
}
