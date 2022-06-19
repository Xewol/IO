#ifndef GLOBAL_H
#define GLOBAL_H
#include <string>
#include <fstream>
#include <vector>

inline auto loadDB() {
	std::vector<Pacjent> pacjenci;
	std::string line;
	std::fstream file;
	file.open("PacjentDB.txt");
	int cnt = 0;
	Pacjent* pac = new Pacjent;
	std::string imie, nazwisko, pesel, ulica, kod_pocztowy, miasto, kraj;
	int ID, karta, oddzial, nr_domu, nr_mieszkania;
	while (std::getline(file, line))
	{
		auto index = line.find(":");
		switch (cnt){
		case 0:

			ID = stoi(line.substr(index + 2));
			break;
		case 1:

			imie = line.substr(index + 2);
			break;
		case 2:

			nazwisko = line.substr(index + 2);
			break;
		case 3:

			pesel = line.substr(index + 2);

			break;
		case 4:

			karta = stoi(line.substr(index + 2));
			break;
		case 5:

			oddzial = stoi(line.substr(index + 2));
			break;
		case 6:

			ulica = line.substr(index + 2);
			break;
		case 7:

			nr_domu = stoi(line.substr(index + 2));
			break;
		case 8:

			nr_mieszkania = stoi(line.substr(index + 2));
			break;
		case 9:

			kod_pocztowy = line.substr(index + 2);
			break;
		case 10:

			miasto = line.substr(index + 2);
			break;
		case 11:

			kraj = line.substr(index + 2);
		break;
		case 12:
			
		break;
			
		}

		if (cnt == 12)
		{
			Pacjent pac(ID, imie, nazwisko, pesel, karta, oddzial, ulica, nr_domu, nr_mieszkania, kod_pocztowy, miasto, kraj);
			cnt = -1;
			pacjenci.push_back(pac);
			pac = Pacjent();
		}
		cnt++;
	}
	
	return pacjenci;
}
#endif // !GLOBAL_H
