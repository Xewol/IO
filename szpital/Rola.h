#ifndef ROLA_H
#define ROLA_H

class Rola {

private:
	std::vector<Pracownik> pracownik;
	string nazwa;

public:
	void setNazwa(int string);

	string getNazwa(int string);
};

#endif
