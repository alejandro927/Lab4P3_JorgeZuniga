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
			if( (i = 0) && ( j%2 == 0)){
				tablero[i][j] = "O";
			}else if( (i = 0) && ( j%2 != 0)){
				tablero[i][j] = Casilla(NULL);
			}
			if( (i = 1) && ( j%2 != 0)){
				tablero[i][j] = "O";
			} else if( (i = 1) && ( j%2 == 0)){
				tablero[i][j] = new Casilla(NULL);
			}
			
			if( (i = 2) && ( j%2 == 0)){
				tablero[i][j] = new Casilla(true);
			}else if( (i = 2) && ( j%2 == 0)){
				tablero[i][j] = new Casilla(NULL);
			}
			
			if( (i = 3) ){
				tablero[i][j] = new Casilla(NULL);
			}
			
			if( (i = 4) ){
				tablero[i][j] = new Casilla(NULL);
			}
				
			if( (i = 5) && ( j%2 != 0)){
				tablero[i][j] = new Casilla(false);
			}else if( (i = 5) && ( j%2 == 0)){
				tablero[i][j] = new Casilla(NULL);
			}
			
			if( (i = 6) && ( j%2 == 0)){
				tablero[i][j] = new Casilla(false);
			}else if( (i = 6) && ( j%2 != 0)){
				tablero[i][j] = Casilla(NULL);
			}
			
			if( (i = 7) && ( j%2 != 0)){
				tablero[i][j] = new Casilla(new Pieza(false));
			}else if( (i = 7) && ( j%2 == 0)){
				tablero[i][j] = new Casilla(NULL);
			}
		}
	}

	




}


Damas::LlenarMatriz(char*** matriz) {

	for(int i = 0; i<8; i++) {
		for(int j=0; j<8; j++) {
			*matriz [i][j] =' ';
		}
	}

}

Damas::ImprimirMatriz(char*** matriz) {
	for(int j=0; j<8; j++) {
		cout<<" "<<j;
	}
	cout<<endl;
	for(int i = 0; i<8; i++) {
		cout << i << " ";
		for(int j=0; j<8; j++) {
			cout << " "<<matriz[i][j];
		}
		cout<<endl;
	}
}

void Damas::Movimiento(int x,int y){
	for(int i = 0; i<8; i++) {
		
		for(int j=0; j<8; j++) {
			
		}
		
	}
}

Damas::~Damas() {
}