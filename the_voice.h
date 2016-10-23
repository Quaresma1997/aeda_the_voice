#ifndef THE_VOICE_H_
#define THE_VOICE_H_

#include <string>
#include <vector>
#include <iostream>
#include "pessoa.h"
#include "musicas.h"
#include "data.h"
#include "fase.h"
#include "the_voice.h"
using namespace std;

class The_Voice
{
	unsigned int id;
	vector <Concorrente *> concorrentes;
	vector <Apresentador *> apresentadores;
	vector <Mentor *> mentores;
	vector <Fase *> fases;
	vector <vector <Musica *>> estilos_musicas; // vetor em k as posicoes sao estilos em k
	string local; //local da edicao
public:

	The_Voice(string lc, unsigned int id);
	~The_Voice(){};

	string getLocal() const;
	unsigned int getID() const;

};

#endif
