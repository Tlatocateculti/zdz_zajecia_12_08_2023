#pragma once
#ifndef _TELEFON_
#define _TELEFON_
#include "urzadzenie.h"
class Telefon : private Urzadzenie 
{
	Telefon() {};
public:
	Telefon(string, string);
	Telefon(string, string, int, int);
	~Telefon() { }
	string podsumowanie();

	friend ostream& operator<< (ostream& s, Telefon& telefon) {
		s << "Klasa telefon: " << telefon.podsumowanie();
		return s;
	}
};

#endif

