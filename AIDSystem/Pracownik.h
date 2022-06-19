#ifndef PRACOWNIK_H
#define PRACOWNIK_H

#include "Adres_zamieszkania.h"
#include "Rola.h"
#include <string>
#include <iostream>


class Pracownik
{
	int m_ID;
	std::string m_Imie;
	std::string m_Nazwisko;
	std::string m_PESEL;
	Adres_zamieszkania m_adres_zamieszkania;
	Rola m_rola;
	std::string m_Zarobki;
	std::string m_nr_tel;
	std::string m_data_urodzenia;
public:
	Pracownik() {};
	Pracownik(int ID, std::string Imie, std::string Nazwisko, std::string PESEL, std::string Rola, std::string Zarobki, std::string nr_tel, std::string data_urodzenia,
		std::string ulica, int numer_domu, int numer_mieszkania, std::string kod_pocztowy, std::string miasto, std::string kraj);
	std::string getImie() const;
	friend std::ostream& operator<< (std::ostream& os, const Pracownik& p);
};


#endif // !PRACOWNIK_H