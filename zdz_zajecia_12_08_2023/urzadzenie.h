#pragma once
#ifndef _URZADZENIE_
#define _URZADZENIE_
#include <iostream>
#include <string>
#include <ctime>
#include <sstream>

#include "monitor.h"

using namespace std;

class Urzadzenie
{
public:
	enum kolory { czarny, bialy, zolty, zielony, niebieski };

private:
	string nazwa;
	string model;
	kolory kolor;
	int rok_prod;
	int lat_od_premiery;
	int waga;

public:
	
	Urzadzenie() { }
	~Urzadzenie() { }

	inline void setNazwa(string n) {
		nazwa = n;
	}

	inline void setModel(string m) {
		model = m;
	}

	inline void setKolor(kolory kolor) {
		this->kolor = kolor;
	}

	void setWaga(string);

	inline void setWaga(int w) {
		if (w > 1000) {
			cout << "Waga produktu za duża!";
			return;
		}
		waga = w;
	}
	inline int getWaga() {
		return waga;
	}
	
	inline void setRokProdukcji(int r) {
		rok_prod = r;
		time_t czas_t = time(0);
		#pragma warning(suppress : 4996)
		tm* czas = localtime(&czas_t);
		lat_od_premiery = 1900 + czas->tm_year - rok_prod;
	}

	inline int getLatOdPremiery() {
		return lat_od_premiery;
	}

	inline int getRokProdukcji() {
		return rok_prod;
	}

	string podsumowanie();

	friend class Monitor;
};

#endif _RZADZENIE_


