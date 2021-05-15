#include "Damas.hpp"

Damas::Dam() {
	int negras = 12;
	int blancas = 12;
	int entradaX,entradaY,salidaX,salidaY;
	preparar();
	ImprimirMatriz(); 
	
	cout<<"Primer jugador:"<<endl;
	cout<<"Ingrese la posicion en X de la pieza que desea mover:"<<endl;
	cin>>entradaX;

	cout<<"Ingrese la posicion en Y de la pieza que desea mover:"<<endl;
	cin>>entradaY;

	cout<<"Ingrese la posicion en X a la que desea mover:"<<endl;
	cin>>salidaX;

	cout<<"Ingrese la posicion en Y a la que desea mover:"<<endl;
	cin>>salidaY;
	Movimiento(entradaX,entradaY,salidaX,salidaY);



}

void Damas::preparar() {
	tablero = new Casilla** [8];
	for(int i=0; i<8; i++) {
		tablero[i] = new Casilla*[8];
	}

	tablero[0][0] = new Casilla( new Pieza(true,false));
	tablero[0][1] = new Casilla(NULL);
	tablero[0][2] = new Casilla( new Pieza(true,false));
	tablero[0][3] = new Casilla(NULL);
	tablero[0][4] = new Casilla( new Pieza(true,false));
	tablero[0][5] = new Casilla(NULL);
	tablero[0][6] = new Casilla( new Pieza(true,false));
	tablero[0][7] = new Casilla(NULL);

	tablero[1][0] = new Casilla(NULL);
	tablero[1][1] = new Casilla( new Pieza(true,false));
	tablero[1][2] = new Casilla(NULL);
	tablero[1][3] = new Casilla( new Pieza(true,false));
	tablero[1][4] = new Casilla(NULL);
	tablero[1][5] = new Casilla( new Pieza(true,false));
	tablero[1][6] = new Casilla(NULL);
	tablero[1][7] = new Casilla( new Pieza(true,false));

	tablero[2][0] = new Casilla( new Pieza(true,false));
	tablero[2][1] = new Casilla(NULL);
	tablero[2][2] = new Casilla( new Pieza(true,false));
	tablero[2][3] = new Casilla(NULL);
	tablero[2][4] = new Casilla( new Pieza(true,false));
	tablero[2][5] = new Casilla(NULL);
	tablero[2][6] = new Casilla( new Pieza(true,false));
	tablero[2][7] = new Casilla(NULL);

	tablero[3][0] = new Casilla(NULL);
	tablero[3][1] = new Casilla(NULL);
	tablero[3][2] = new Casilla(NULL);
	tablero[3][3] = new Casilla(NULL);
	tablero[3][4] = new Casilla(NULL);
	tablero[3][5] = new Casilla(NULL);
	tablero[3][6] = new Casilla(NULL);
	tablero[3][7] = new Casilla(NULL);

	tablero[4][0] = new Casilla(NULL);
	tablero[4][1] = new Casilla(NULL);
	tablero[4][2] = new Casilla(NULL);
	tablero[4][3] = new Casilla(NULL);
	tablero[4][4] = new Casilla(NULL);
	tablero[4][5] = new Casilla(NULL);
	tablero[4][6] = new Casilla(NULL);
	tablero[4][7] = new Casilla(NULL);

	tablero[5][0] = new Casilla(NULL);
	tablero[5][1] = new Casilla( new Pieza(false,false));
	tablero[5][2] = new Casilla(NULL);
	tablero[5][3] = new Casilla( new Pieza(false,false));
	tablero[5][4] = new Casilla(NULL);
	tablero[5][5] = new Casilla( new Pieza(false,false));
	tablero[5][6] = new Casilla(NULL);
	tablero[5][7] = new Casilla( new Pieza(false,false));

	tablero[6][0] = new Casilla( new Pieza(false,false));
	tablero[6][1] = new Casilla(NULL);
	tablero[6][2] = new Casilla( new Pieza(false,false));
	tablero[6][3] = new Casilla(NULL);
	tablero[6][4] = new Casilla( new Pieza(false,false));
	tablero[6][5] = new Casilla(NULL);
	tablero[6][6] = new Casilla( new Pieza(false,false));
	tablero[6][7] = new Casilla(NULL);

	tablero[7][0] = new Casilla(NULL);
	tablero[7][1] = new Casilla( new Pieza(false,false));
	tablero[7][2] = new Casilla(NULL);
	tablero[7][3] = new Casilla( new Pieza(false,false));
	tablero[7][4] = new Casilla(NULL);
	tablero[7][5] = new Casilla( new Pieza(false,false));
	tablero[7][6] = new Casilla(NULL);
	tablero[7][7] = new Casilla( new Pieza(false,false));


}


void Damas::ImprimirMatriz() {
	for(int i = 0; i < 8 ; i++) {
		for(int j=0; j < 8 ; j++) {
			cout << "[" << tablero[i][j]->toString() << "]" ;
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

			}else if((tablero[entradaX][entradaY]). == Pieza(false,false) ){//ficha negra

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