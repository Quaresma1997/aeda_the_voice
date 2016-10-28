#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
#include "pessoa.h"
using namespace std;

//Pessoa

Pessoa::Pessoa(unsigned int ida, string nm, string loc):idade(ida), nome(nm), localidade(loc)
{
	id=-1;
}

unsigned int Pessoa::getId() const
{
	return id;
}

unsigned int Pessoa::getIdade() const
{
	return idade;
}

string Pessoa::getNome() const
{
	return nome;
}

string Pessoa::getLocalidade() const
{
	return localidade;
}

//Concorrente : Pessoa

unsigned int Concorrente::ID_CONCORRENTE_GERAL=1; //id geral, para dar um novo id sequencial a cada concorrente

Concorrente::Concorrente(unsigned int ida, string nm, string loc, Musica *mus):Pessoa(ida, nm, loc)
{
	musicas.push_back(mus);

	qualidade=-1;
	Em_Prova=-1;
	estilo="";
	equipa=0;

	id=ID_CONCORRENTE_GERAL;
	ID_CONCORRENTE_GERAL++;
}

void Concorrente::setEm_Prova(int em_p)
{
	Em_Prova=em_p;
}

void Concorrente::setEstilo(string est)
{
	estilo=est;
}

void Concorrente::setQualidade(int qual)
{
	qualidade=qual;
}

void Concorrente::setMusicas(Musica *mus)
{
	musicas.push_back(mus);
}

void Concorrente::setEquipa(int e)
{
	equipa=e;
}

vector<Musica *> Concorrente::getMusicas() const
{
	return musicas;
}

int Concorrente::getEm_Prova() const
{
	return Em_Prova;
}

string Concorrente::getEstilo() const
{
	return estilo;
}

int Concorrente::getQualidade() const
{
	return qualidade;
}

int Concorrente::getEquipa() const
{
	return equipa;
}

//Mentor : Pessoa

int Mentor::ID_MENTOR_GERAL=1; //id geral, para dar um novo id sequencial a cada mentor

Mentor::Mentor(unsigned int ida, string nm, string loc, unsigned int part,unsigned int ed, vector<string>est):Pessoa(ida, nm, loc), participacoes(part), edicoes_ganhas(ed), estilos(est)
{
	id=ID_MENTOR_GERAL;
	ID_MENTOR_GERAL++;
}

unsigned int Mentor::getParticipacoes() const
{
	return participacoes;
}

unsigned int Mentor::getEdicoes_Ganhas() const
{
	return edicoes_ganhas;
}

vector<string> Mentor::getEstilos() const
{
	return estilos;
}

vector <Concorrente *> Mentor::getConcorrentes_na_equipa() const
{
	return concorrentes_na_equipa;
}

void Mentor::setConcorrentes_na_equipa(Concorrente *c)
{
	concorrentes_na_equipa.push_back(c);
}
//Apresentador : Pessoa

int Apresentador::ID_APRESENTADOR_GERAL=1; //id geral, para dar um novo id sequencial a cada apresentador

Apresentador::Apresentador(unsigned int ida, string nm, string loc):Pessoa(ida, nm, loc)
{
	id=ID_APRESENTADOR_GERAL;
	ID_APRESENTADOR_GERAL++;
}
