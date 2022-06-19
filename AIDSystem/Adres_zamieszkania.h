#ifndef ADRES_ZAMIESZKANIA_H
#define ADRES_ZAMIESZKANIA_H

#include <string>

struct Adres_zamieszkania {
	std::string m_Ulica;
	int m_Numer_domu;
	int m_Numer_mieszkania;
	std::string m_Kod_pocztowy;
	std::string m_Miasto;
	std::string m_Kraj;
	Adres_zamieszkania(std::string ulica, int numer_domu, int numer_mieszkania, std::string kod_pocztowy, std::string miasto, std::string kraj) :
		m_Ulica{ ulica },
		m_Numer_domu{ numer_domu },
		m_Numer_mieszkania{ numer_mieszkania },
		m_Kod_pocztowy{ kod_pocztowy },
		m_Miasto{ miasto },
		m_Kraj{ kraj }
	{}
};

#endif // !ADRES_ZAMIESZKANIA_H