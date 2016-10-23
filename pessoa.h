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
	bool Em_Prova;
	static unsigned int ID_CONCORRENTE_GERAL;

	public:
		Concorrente(unsigned int ida, string nm, string loc, Musica *mus);
		~Concorrente(){};

		void setEm_Prova(bool em_p);
		void setEstilo(string est);
		void setQualidade(int qual);
		void setMusicas(Musica *mus);


		vector<Musica *> getMusicas() const;
		bool getEm_Prova() const;
		string getEstilo() const;
		int getQualidade() const;

		//GET INFORMACAO
};

class Mentor:public Pessoa
{
	unsigned int participacoes;
	unsigned int edicoes_ganhas;
	static int ID_MENTOR_GERAL;
	vector <string> estilos;
	public:
		Mentor(unsigned int ida, string nm, string loc, unsigned int part,unsigned int ed, vector<string>est);
		~Mentor(){};
		unsigned int getParticipacoes() const;
		unsigned int getEdicoes_Ganhas() const;
vector<string> getEstilos() const;
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
