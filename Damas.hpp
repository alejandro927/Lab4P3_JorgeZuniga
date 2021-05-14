#ifndef DAMAS_HPP
#define DAMAS_HPP
#include "Casilla.hpp"
#include <string>

class Damas {
	public:
		void preparar();
		Damas();
		LlenarMatriz(char***);
		ImprimirMatriz(char***);
		
		bool Ganar(int,int);
		void movimiento();
		
		~Damas();
	private:
		Casilla*** tablero;
};

#endif