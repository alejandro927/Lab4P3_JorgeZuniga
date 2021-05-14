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

Pieza::~Pieza() {
}