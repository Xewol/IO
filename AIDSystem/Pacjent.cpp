#include "Pacjent.h"

Pacjent::Pacjent(int ID, std::string Imie, std::string Nazwisko, std::string PESEL, int Karta_pacjenta, int Oddzial,
	std::string ulica, int numer_domu, int numer_mieszkania, std::string kod_pocztowy, std::string miasto, std::string kraj) :
	m_ID{ ID },
	m_Imie{ Imie },
	m_Nazwisko{ Nazwisko },
	m_PESEL{ PESEL },
	m_Karta_pacjenta{ Karta_pacjenta },
	m_Oddzial{ Oddzial },
	m_Adres_zamieszkania{ ulica, numer_domu, numer_mieszkania, kod_pocztowy, miasto, kraj }
{}

std::ostream& operator<<(std::ostream& os, const Pacjent& p)
{
	os << " Pacjent nr " << p.m_ID << " (nr karty: " << p.m_Karta_pacjenta << ")\n Imie: " << p.m_Imie << "\n Nazwisko: " << p.m_Nazwisko << "\n PESEL: " << p.m_PESEL << "\n Numer oddzialu: " << p.m_Oddzial << "\nAdres zamieszkania: " << "\n\t" << p.m_Adres_zamieszkania.m_Ulica << " " << p.m_Adres_zamieszkania.m_Numer_domu << "/" << p.m_Adres_zamieszkania.m_Numer_mieszkania << "\n\t" << p.m_Adres_zamieszkania.m_Kod_pocztowy << " " << p.m_Adres_zamieszkania.m_Miasto << "\n\t" << p.m_Adres_zamieszkania.m_Kraj;
	return os;
}
//td::string Ulica;
/*int numer_domu;
int numer_mieszkania;
std::string kod_pocztowy;
std::string miasto;
std::string kraj;*/