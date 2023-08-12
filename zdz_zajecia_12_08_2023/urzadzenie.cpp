#include "urzadzenie.h"

string Urzadzenie::podsumowanie() {
	stringstream s;
	s << "Nazwa urządzenia: " << nazwa <<
		"\nModel urządzenia: " <<  model <<
	    "\nWaga: " << waga << "\nRok produkcji: " << rok_prod <<
	    "\nLat na rynku: " << lat_od_premiery;
	return s.str();
}

void Urzadzenie::setWaga(string s) {
	//tutaj trzeba dodać odpowiedni kod
}