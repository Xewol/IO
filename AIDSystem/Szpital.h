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
	
	void przyjmij_pacjenta(Pacjent *p, int id);
	void ustalDawkiLekow(Pacjent* pa, std::string lek);
	void zalozKarte(Pacjent *p);
	int wykonajZabieg(Pacjent* p,std::string zabieg);
	void zwolnij_pacjenta(Pacjent* p);
	
};



#endif // !SZPITAL_H