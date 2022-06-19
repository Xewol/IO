#ifndef GLOBAL_H
#define GLOBAL_H
#include <string>
#include <fstream>
#include <vector>
#include "Pracownik.h"
#include "Pacjent.h"
#include "Karta.h"
#include <string>

struct Dane {
	int ID;
	std::vector<std::string> historia;
	std::vector<std::string> leki;
};

std::vector<Pacjent> loadDBPacjent();

std::vector<Pracownik> loadDBPracownik();
std::vector<Karta> loadDBKarta();



#endif // !GLOBAL_H
