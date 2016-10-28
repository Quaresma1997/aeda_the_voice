#ifndef THE_VOICE_H_
#define THE_VOICE_H_

#include <string>
#include <vector>
#include <iostream>
#include "pessoa.h"
#include "musicas.h"
#include "data.h"
#include "fase.h"
#include "sequentialSearch.h"
#include <map>
using namespace std;

class The_Voice
{
	unsigned int id;
	vector <Concorrente *> concorrentes;
	vector <Apresentador *> apresentadores;
	vector <Mentor *> mentores;
	vector <Fase *> fases;
	vector <Musica *> musicas;
	string local; //local da edicao
public:

	The_Voice(string lc, unsigned int id);
	~The_Voice(){};

	string getLocal() const;
	unsigned int getID() const;


	void setMusicas(Musica *m) ;
	void setApresentadores(Apresentador *a) ;
	void setMentores(Mentor *m) ;
	void setConcorrentes(Concorrente *c) ;
	void setFases(Fase *f) ;

	vector <Concorrente *> getConcorrentes() const;
	vector <Apresentador *> getApresentadores() const;
	vector <Mentor *> getMentores() const;
	vector <Fase *> getFases() const;
	vector <Musica *> getMusicas() const;


};

#endif
