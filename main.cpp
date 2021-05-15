#include <iostream>
#include "Damas.hpp"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Damas* d = new Damas();
	d->Dam();
	//d->preparar();
	//d->ImprimirMatriz();
	delete d;
	return 0;
}