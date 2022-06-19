#ifndef ROLA_H
#define ROLA_H

#include <string>

class Rola {
	std::string m_Nazwa;
public:
	Rola(std::string Nazwa);
	void setNazwa(std::string nazwa);
	std::string getNazwa() const;
	Rola() {};
};

#endif // !ROLA_H