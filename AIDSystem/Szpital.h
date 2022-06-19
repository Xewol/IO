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
	  //@ts-expect-error
	  //std::vector<Karta> m_karty;

	Szpital() {
		m_pacjenci = loadDBPacjent();
		m_pracownicy = loadDBPracownik();
	}

	
	
};



#endif // !SZPITAL_H