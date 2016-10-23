#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "const.h"
#include "func.h"
#include "the_voice.h"
using namespace std;

The_Voice::The_Voice(string lc, unsigned int id):local(lc), id(id)
{

}

unsigned int The_Voice::getID() const
{
	return id;
}

string The_Voice::getLocal() const
{
	return local;
}



get_info TheVoice::get_files_info()
{

}
