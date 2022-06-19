#include "Szpital.h"
#include <vector>
#include "Global.h"

void Szpital::przyjmij_pacjenta(Pacjent *p, int id)
{
	p->setOddzial(id);
}

void Szpital::zalozKarte(Pacjent* p)
{
	std::vector<std::string> leki;
	std::vector<std::string> historia;
	Karta nowa_karta(24, historia, leki);
	p->setNrKarty(nowa_karta.m_ID);
}
