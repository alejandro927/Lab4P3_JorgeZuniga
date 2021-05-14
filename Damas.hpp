#ifndef DAMAS_HPP
#define DAMAS_HPP
#include "Casilla.hpp"
#include <string>

class Damas {
	public:
		Damas();
		void preparar();
		ImprimirMatriz();
		bool Ganar(int,int);
		Movimiento(int,int,int,int);
		~Damas();
		
	private:
		Casilla*** tablero;
};

#endif