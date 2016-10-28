#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
#include "musicas.h"
using namespace std;

//Musica

unsigned int Musica::ID_MUSICA_GERAL=1;

Musica::Musica(string nm, string est):nome(nm), estilo(est)
{
	id=ID_MUSICA_GERAL;
	ID_MUSICA_GERAL++;
}

unsigned int Musica::getId() const
{
	return id;
}

string Musica::getNome() const
{
	return nome;
}

string Musica::getEstilo() const
{
	return estilo;
}

bool Musica::operator == (const Musica &m1) const
{
	return nome==m1.nome;
}
