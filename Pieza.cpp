#include "Pieza.hpp"

Pieza::Pieza() {
}

Pieza::Pieza(bool bandera,bool reina) {
	b = bandera;
	r = reina;
}

string Pieza::toString(){
	if(b == true) {
		if(r) {
			return "RO";
		} else {
			return "O";
		}
	} else if(b == false) {
		if(r) {
			return "RX";
		} else {
			return "X";
		}
	}
}

bool Pieza:: getPieza() {
    return this->b;
}

void Pieza::setPieza(bool bandera) {
    this->b = bandera;
}

bool Pieza:: getReina() {
    return this->r;
}

void Pieza::setReina(bool Reina) {
    this->r = Reina;
}






Pieza::~Pieza() {
}