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
	
	string waga;
	string jedn;
	bool d = false;
	char* znak = &s[0];

	while (*znak != '\0') {
		if (*znak == ',' && !d) {
			*znak = '.';
		}
		if ((*znak >= '0' && *znak <= '9') || (*znak == '.' && !d)) {
			waga += *znak;
			if (*znak == '.') 
				d = !d;
		}
		if (*znak >= 'A' && *znak <= 'Z') {

			*znak = 'a' + (*znak - 'A');
		}
		if (*znak >= 'a' && *znak <= 'z' && waga.size()> 0) {
			jedn += *znak;
		}

		znak++;
	}
	stringstream ss;
	ss << waga;
	double wtmp = .0;
	ss >> wtmp;
	if (jedn[0] == 'k') wtmp *= 1000;
	cout << jedn << " " << wtmp  << "\n";
}