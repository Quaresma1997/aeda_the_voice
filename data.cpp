#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
#include "data.h"
using namespace std;

Data::Data(unsigned int d, unsigned int m, unsigned int a, string t):dia(d), mes(m), ano(a), tipo(t)
{

}

string Data::getData() const
{
	stringstream ss;
	ss << dia<<"/"<< mes<<"/"<< ano;

	return ss.str();
}

string Data::getTipo() const
{
	return tipo;
}
