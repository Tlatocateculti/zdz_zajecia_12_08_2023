#pragma once
#ifndef _MONITOR_
#define _MONITOR_

#include "urzadzenie.h"

class Monitor {
	class Urzadzenie;

	int przekatna;
	int czestotliwosc;


public:
	void setPrzekatna(int przekatna);
	inline int getPrzekatna() { return przekatna; };

	void setCzestotliwosc(int czestotliwosc);
	inline int getCzestotliwosc() { return czestotliwosc;  };

	//friend class Urzadzenie;
	void setUrzadzenie(Urzadzenie& u);
};

#endif _MONITOR_