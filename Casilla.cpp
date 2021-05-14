#include "Casilla.hpp"

Casilla::Casilla() {
}

Casilla::Casilla(Pieza* pieza) {
	p = pieza;
}

string Casilla::toString(){
	if(p==NULL){
		return  " ";
	}else{
		return p->toString();
	}
}

Casilla::~Casilla() {
}