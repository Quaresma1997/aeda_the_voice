#ifndef MUSICAS_H_
#define MUSICAS_H_

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Musica
{
protected:
	unsigned int id;
	string nome;
	string estilo;

	static unsigned int ID_MUSICA_GERAL;
public:
	Musica(string nm, string est);
	~Musica(){};
	unsigned int getId() const;
	string getNome() const;
	string getEstilo() const;

	//GET INFORMACAO

};

#endif
