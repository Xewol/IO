#include "Szpital.h"
#include <vector>
#include "Global.h"
#include <algorithm>

void Szpital::przyjmij_pacjenta(Pacjent *p, int id)
{
	p->setOddzial(id);
}

void Szpital::zalozKarte(Pacjent* p)
{
	std::vector<std::string> leki;
	std::vector<std::string> historia;
	auto it = std::max_element(m_karty.begin(), m_karty.end(), [&](const Karta& a, const Karta& b) {
		return a.m_ID > b.m_ID; });
	auto indx = std::distance(m_karty.begin(), it);
	Karta nowa_karta(m_karty[indx].m_ID+1, historia, leki);
	m_karty.push_back(nowa_karta);
	p->setNrKarty(nowa_karta.m_ID);
}

int Szpital::wykonajZabieg(Pacjent* p,std::string zabieg)
{
	auto itK = std::find_if(m_karty.begin(), m_karty.end(), [&](const Karta& k) {return k.m_ID == p->getNrKarty(); });
	auto indxK = std::distance(m_karty.begin(), itK);
	auto itPr = std::find_if(m_pracownicy.begin(), m_pracownicy.end(), [&](const Pracownik& pr) {return pr.getRole() == "Lekarz"; });
	auto indxPr = std::distance(m_pracownicy.begin(), itPr);
	std::cout << "Zabieg wykonał Lekarz: " << m_pracownicy[indxPr].getImie()<<"\n\n";
	m_karty[indxK].m_historia.push_back(zabieg);
	return indxK;
}

void Szpital::zwolnij_pacjenta(Pacjent* p)
{
	p->setOddzial(0);
}

void Szpital::ustalDawkiLekow(Pacjent* pa, std::string lek)
{
	auto itPr = std::find_if(m_pracownicy.begin(), m_pracownicy.end(), [&](const Pracownik& pr) {return pr.getRole() == "Lekarz"; });
	auto indxPr = std::distance(m_pracownicy.begin(), itPr);
	std::cout << "Dawki lekow ustalone przez lekarza: " << m_pracownicy[indxPr].getImie()<<"\n\n";
	
	auto itK = std::find_if(m_karty.begin(), m_karty.end(), [&](const Karta& k) {return k.m_ID == pa->getNrKarty(); });
	auto indxK = std::distance(m_karty.begin(), itK);

	m_karty[indxK].m_leki.push_back(lek);

}

