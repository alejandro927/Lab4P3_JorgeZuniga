#include "Pieza.hpp"

toString Pieza::Pieza(bool bandera)
{
	if(bandera == NULL){
		cout<<" ";
	}else if(bandera == true){
		cout<<"O";
	}else if(bandera == false){
		cout<<"X";
	}
	
}

Pieza::~Pieza()
{
}