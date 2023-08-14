#include "monitor.h"

void Monitor::setPrzekatna(int przekatna) {

	this->przekatna = przekatna;

}

void Monitor::setUrzadzenie(Urzadzenie & u) {
	//to wszystko zadziala dzieki zaprzyjaznieniu klasy Monitor z Urzadzenie (w klasie Urzadzenie)
	u.kolor = u.bialy;
	u.nazwa = "Domyslne";
	u.model = "N/A";
	u.waga = 0;
	u.rok_prod = 0;
}