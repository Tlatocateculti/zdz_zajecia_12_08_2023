#include "telefon.h"
 
Telefon::Telefon(string nazwa, string model) : Telefon(nazwa, model, 0, 0) {

}

Telefon::Telefon(string nazwa, string model, int waga, int rokProdukcji)  {
	setNazwa(nazwa);
	setModel(model);
	setWaga(waga);
	setRokProdukcji(rokProdukcji);
	
}

string Telefon::podsumowanie() {
	return Urzadzenie::podsumowanie();
}