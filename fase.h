#ifndef FASE_H_
#define FASE_H_

#include <string>
#include <vector>
#include <iostream>
#include "pessoa.h"
#include "data.h"

using namespace std;

class Fase
{
protected:
	unsigned int id;
	string nome;
	int qts_passam_por_equipa;
	Data* data;

	vector <Concorrente *> concorrentes;
	static unsigned int ID_FASE_GERAL;
public:
	Fase(string nm, int qts, Data* dat);
	~Fase(){};
	unsigned int getId() const;
	string getNome() const;
	int getQTS_PASSAM() const;
	vector <Concorrente *> getConcorrentes() const;


	void setConcorrentes(Concorrente *c);


	//GET INFORMACAO

};

class Prova_cega: public Fase
{
	vector<vector <int>> cadeiras_viraram_cada_concorrente;

public:
	Prova_cega(string nm, int qts, Data* dat);
	~Prova_cega(){};
	vector<vector <int>> getCadeiras() const;

	void setCadeiras(vector <int> cad);
};

#endif
