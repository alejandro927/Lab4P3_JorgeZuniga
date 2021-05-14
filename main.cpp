#include <iostream>
#include "Damas.hpp"
#include "Casilla.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Casilla* c = new Casilla();
	c->Cas();
	delete c;
	return 0;
}