#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
#include <vector>
#include <iostream>
#include "musicas.h"
using namespace std;

class Pessoa
{
protected:
	int id;
	unsigned int idade;
	string nome;
	string localidade;



	public:
		Pessoa(unsigned int ida, string nm, string loc);
		~Pessoa(){};
		unsigned int getId() const;
		unsigned int getIdade() const;
		string getNome() const;
		string getLocalidade() const;

		//GET INFORMACAO

};

class Concorrente:public Pessoa
{
	vector<Musica *> musicas;
	int qualidade;
	string estilo;
	int Em_Prova;
	int equipa;
	static unsigned int ID_CONCORRENTE_GERAL;

	public:
		Concorrente(unsigned int ida, string nm, string loc, Musica *mus);
		~Concorrente(){};

		void setEm_Prova(int em_p); //nas fases é alterado
		void setEstilo(string est);
		void setQualidade(int qual);
		void setMusicas(Musica *mus);
		void setEquipa(int e);

		vector<Musica *> getMusicas() const;
		int getEm_Prova() const;
		string getEstilo() const;
		int getQualidade() const;
		int getEquipa() const;

		//GET INFORMACAO
};

class Mentor:public Pessoa
{
	unsigned int participacoes;
	unsigned int edicoes_ganhas;
	static int ID_MENTOR_GERAL;
	vector <string> estilos;
	vector <Concorrente *> concorrentes_na_equipa;
	public:
		Mentor(unsigned int ida, string nm, string loc, unsigned int part,unsigned int ed, vector<string>est);
		~Mentor(){};
		unsigned int getParticipacoes() const;
		unsigned int getEdicoes_Ganhas() const;
vector<string> getEstilos() const;
vector <Concorrente *> getConcorrentes_na_equipa() const;

void setConcorrentes_na_equipa(Concorrente *c);

		//GET INFORMACAO
};

class Apresentador:public Pessoa
{

	static int ID_APRESENTADOR_GERAL;

	public:
		Apresentador(unsigned int ida, string nm, string loc);
		~Apresentador(){};

};


#endif
