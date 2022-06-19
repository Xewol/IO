#include "Pracownik.h"
#include "Pacjent.h"
#include <iostream>
#include <algorithm>
#include <Windows.h>
#include "Szpital.h"
#include "Global.h"

Szpital SZP1;

// Pacjenta nie ma na oddziale
void test1() {
	// Przyjecie pacjenta
	std::cout << "Przyjecie pacjenta: \n";
	auto it = std::find_if(SZP1.m_pacjenci.begin(), SZP1.m_pacjenci.end(), [&](Pacjent const& p) {return p.getOddzial() == 0; });
	std::cout << *it << std::endl << std::endl;
	Sleep(1000);
	auto indx = std::distance(SZP1.m_pacjenci.begin(), it);
	//Przyjecie pacjenta na oddzial
	std::cout << "Zalozenie karty: \nnr karty: " << SZP1.m_pacjenci[indx].getNrKarty();
	SZP1.zalozKarte(&SZP1.m_pacjenci[indx]);
	Sleep(200);
	std::cout << " --> ";
	std::cout << "nr karty: " << SZP1.m_pacjenci[indx].getNrKarty() << std::endl;
	std::cout << "Zapisanie na oddzial: \nnr oddzialu: " << SZP1.m_pacjenci[indx].getOddzial();
	SZP1.przyjmij_pacjenta(&SZP1.m_pacjenci[indx], 1);
	Sleep(1000);
	std::cout << " --> ";
	Sleep(1000);
	std::cout << "nr oddzialu: " << SZP1.m_pacjenci[indx].getOddzial() << std::endl;
	std::cout << "Ustalenie lekarstw: " << std::endl;
	SZP1.ustalDawkiLekow(&SZP1.m_pacjenci[indx], "19.06.2022 Xanax 20mg");
	auto itK = std::find_if(SZP1.m_karty.begin(), SZP1.m_karty.end(), [&](const Karta& k) {return k.m_ID == SZP1.m_pacjenci[indx].getNrKarty(); });
	auto indxK = std::distance(SZP1.m_karty.begin(), itK);
	Sleep(1000);
	std::cout<<SZP1.m_karty[indxK];

}
 //Pacjent jest na oddziale
void test2() {
	//Wykonanie zabiegu
	
	auto it = std::find_if(SZP1.m_pacjenci.begin(), SZP1.m_pacjenci.end(), [&](Pacjent const& p) {return p.getOddzial() != 0; });
	std::cout << *it << std::endl << std::endl;
	Sleep(1000);
	auto indx = std::distance(SZP1.m_pacjenci.begin(), it);
	int karta= SZP1.wykonajZabieg(&SZP1.m_pacjenci[indx], "19.06.2022 Wyciecie wyrostka robaczkowego.");
	SZP1.ustalDawkiLekow(&SZP1.m_pacjenci[indx], "19.06.2022 Morfina .5mg");
	Sleep(1000);
	std::cout << SZP1.m_karty[karta];
	
	std::cout << "Wypisanie pacjenta: \n\n";
	Sleep(1000);
	//wypisanie
	SZP1.zwolnij_pacjenta(&SZP1.m_pacjenci[indx]);
	Sleep(1000);
	std::cout << *it;

}

int main()
{

	test2();
}