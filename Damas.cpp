#include "Damas.hpp"

Damas::Damas() {
	int negras = 12;
	int blancas = 12;
	
	
}

void Damas::preparar() {
	tablero = new Casilla** [8];
	for(int i=0; i<8; i++) {
		tablero[i] = new Casilla*[8];
	}

	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			
			//blancas
			if( (i = 0) && ( j%2 == 0)) {
				tablero[i][j] = new Casilla(new Pieza(true,false));
			} else if( (i = 0) && ( j%2 != 0)) {
				tablero[i][j] = new Casilla(NULL);
			}
			if( (i = 1) && ( j%2 != 0)) {
				tablero[i][j] = new Casilla(new Pieza(true,false));
			} else if( (i = 1) && ( j%2 == 0)) {
				tablero[i][j] = new Casilla(NULL);
			}

			if( (i = 2) && ( j%2 == 0)) {
				tablero[i][j] = new Casilla(new Pieza(true,false));
			} else if( (i = 2) && ( j%2 == 0)) {
				tablero[i][j] = new Casilla(NULL);
			}
			
			//lineas de  negras
			if( (i = 5) && ( j%2 != 0)) {
				tablero[i][j] = new Casilla(new Pieza(false,false));
			} else if( (i = 5) && ( j%2 == 0)) {
				tablero[i][j] = new Casilla(NULL);
			}

			if( (i = 6) && ( j%2 == 0)) {
				tablero[i][j] = new Casilla(new Pieza(false,false));
			} else if( (i = 6) && ( j%2 != 0)) {
				tablero[i][j] = new Casilla(NULL);
			}

			if( (i = 7) && ( j%2 != 0)) {
				tablero[i][j] = new Casilla(new Pieza(false,false));
			} else if( (i = 7) && ( j%2 == 0)) {
				tablero[i][j] = new Casilla(NULL);
			}
			
			//lineas de en medio vacias
			if( (i = 3) ) {
				tablero[i][j] = new Casilla(NULL);
			}
			if( (i = 4) ) {
				tablero[i][j] = new Casilla(NULL);
			}
		}
	}
	
	ImprimirMatriz();
}


Damas::ImprimirMatriz() {
	for(int i = 0; i<8; i++) {
		for(int j=0; j<8; j++) {
			cout<<"["<<tablero[i][j]->toString()<<"]";
		}
		cout<<endl;
	}
}

Damas::Movimiento(int entradaX,int entradaY,int salidaX, int salidaY) {
	for(int i = 0; i<8; i++) {
		int auxI=0;
		int auxJ=0;
		for(int j=0; j<8; j++) {
			//ficha blanca
			/*
			if((tablero[entradaX][entradaY]) == Pieza(true,false) ){
				
			}else if((tablero[entradaX][entradaY]) == Pieza(false,false) ){//ficha negra
				
			}else if((tablero[entradaX][entradaY]) == Pieza(true,true) ){//reina blanca
				
			}else if((tablero[entradaX][entradaY]) == Pieza(false,true) ){ // reina negra
				
			}
			
			if((trablero[salidaX][salidaY])  == NULL  ) {
				if( (trablero[salidaX][salidaY] == tablero[entradaX-1][entradaY-1]) || (trablero[salidaX][salidaY] == tablero[entradaX-1][entradaY+1]) || (trablero[salidaX][salidaY] == tablero[entradaX+1][entradaY+1]) || (trablero[salidaX][salidaY] == tablero[entradaX+1][entradaY-1])    ) {

				}
			}else{
				cout<<"Hay una ficha en esa posicion y no se puede avanzar hacia ese lugar!!";
			}
			
			*/
		}
	}
}

Damas::~Damas() {
}