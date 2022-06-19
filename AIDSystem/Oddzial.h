#ifndef ODDZIAL_H
#define ODDZIAL_H

#include <string>

class Oddzial
{
	int m_ID;
	std::string m_Nazwa;
	std::string m_Typ;
	std::string m_Grafik;
public:
	std::string getNazwa() const;
};

#endif // !ODDZIAL_H


