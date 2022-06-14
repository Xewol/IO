#ifndef KARTA PACJENTA_H
#define KARTA PACJENTA_H

class Karta_pacjenta {

private:
	Pacjent pacjent;
	int ID;
	string historia[];
	string leki[];

public:
	void getPacjent(int ID);

	void edit(int data);
};

#endif
