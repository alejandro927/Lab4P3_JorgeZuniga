#include <iostream>
#ifndef CASILLA_HPP
#define CASILLA_HPP
#include "Pieza.hpp"
using namespace std;
class Casilla
{
	public:
		
		Casilla();
		Casilla(Pieza*);
		string toString();
		~Casilla();
		
	private:
	Pieza* p;
};

#endif