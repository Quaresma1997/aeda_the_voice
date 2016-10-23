#ifndef DATA_H_
#define DATA_H_

#include <string>
#include <vector>
#include <iostream>
#include "data.h"
using namespace std;


class Data
{
protected:
	unsigned int dia;
	unsigned int mes;
	unsigned int ano;
	string tipo;  //se é em direto ou em diferido

public:
	Data(unsigned int d, unsigned int m, unsigned int a, string t);
	~Data(){};

	string getData() const;
	string getTipo() const;
};

#endif
