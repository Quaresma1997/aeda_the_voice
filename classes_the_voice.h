#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Pessoa
{
	unsigned int id;
	unsigned int idade;
	string nome;
	string localidade;

	public:
		Pessoa(unsigned int idade, string nome, string localidade);
		~Pessoa(){};
		unsigned int getId();
		unsigned int getIdade();
		string getNome();
		string getLocalidade();

		//GET INFORMACAO

};

class Concorrente:public Pessoa
{
	string musica_prova_cega;

	public:
		Concorrente(unsigned int idade, string nome, string localidade, string musica_prova_cega);
		~Concorrente(){};
		string getMusica_Prova_Cega();

		//GET INFORMACAO
};

class Mentor:public Pessoa
{
	unsigned int participacoes;
	unsigned int edicoes_ganhas;

	public:
		Mentor(unsigned int idade, string nome, string localidade, unsigned int participacoes,unsigned int edicoes_ganhas );
		~Mentor(){};
		unsigned int getParticipacoes();
		unsigned int getEdicoes_Ganhas();

		//GET INFORMACAO
};

class Apresentador:public Pessoa
{
	string gagaahhahahahha;

	public:
		Apresentador(unsigned int idade, string nome, string localidade, string musica_prova_cega);
		~Apresentador(){};
		string getMusica_Prova_Cega();
};

class The_Voice
{
	vector<Concorrente *> concorrentes;
	vector<Mentor *> mentores;
	vector<Apresentador *> apresentadores;



};
