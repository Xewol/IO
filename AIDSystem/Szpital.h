#ifndef SZPITAL_H
#define SZPITAL_H

#include <iostream>
#include <vector>
#include <memory>
#include "Pacjent.h"
#include "Global.h"
class Szpital
{
	
	 
public:
	  std::vector<Pacjent> m_pacjenci;
	  std::vector<Pracownik> m_pracownicy;
	
	  std::vector<Karta> m_karty;

	Szpital() {
		m_pacjenci = loadDBPacjent();
		m_pracownicy = loadDBPracownik();
		m_karty = loadDBKarta();
	}

	
	
};



#endif // !SZPITAL_H