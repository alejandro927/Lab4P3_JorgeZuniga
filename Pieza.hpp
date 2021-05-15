#ifndef PIEZA_HPP
#define PIEZA_HPP
#include <iostream>
#include <string>
using namespace std;
class Pieza
{
	public:
		Pieza();
		Pieza(bool,bool);
		bool getPieza();
		void setPieza(bool);
		bool getReina();
		void setReina(bool);
		~Pieza();
		string toString();
	private:
		bool b;
		bool r;
};

#endif