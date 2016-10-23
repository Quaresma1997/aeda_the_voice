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
#include <map>
using namespace std;

class The_Voice
{
	unsigned int id;
	vector <Concorrente *> concorrentes;
	vector <Apresentador *> apresentadores;
	vector <Mentor *> mentores;
	vector <Fase *> fases;
	map<string, vector<Musica *>> estilos_musicas;
	string local; //local da edicao
public:

	The_Voice(string lc, unsigned int id);
	~The_Voice(){};

	string getLocal() const;
	unsigned int getID() const;

	void setMusicas(string estilo_pos,Musica *m) ;
	void setApresentadores(Apresentador *a) ;
	void setMentores(Mentor *m) ;
	void setConcorrentes(Concorrente *c) ;
	void setFases(Fase *f) ;

	vector <Concorrente *> getConcorrentes() const;
	vector <Apresentador *> getApresentadores() const;
	vector <Mentor *> getMentores() const;
	vector <Fase *> getFases() const;
	map<string, vector<Musica *>> getEstilos_musicas() const;


};

#endif
