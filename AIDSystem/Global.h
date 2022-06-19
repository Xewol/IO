#ifndef GLOBAL_H
#define GLOBAL_H
#include <string>
#include <fstream>
#include <vector>
#include "Pracownik.h"
#include "Pacjent.h"

std::vector<Pacjent> loadDBPacjent();

std::vector<Pracownik> loadDBPracownik();
#endif // !GLOBAL_H
