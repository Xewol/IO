#ifndef PRACOWNIK_H
#define PRACOWNIK_H

class Pracownik {

private:
	Rola rola;
	Szpital szpital;
	String imie;
	String nazwisko;
	Adres_zamieszkania* adres_zamieszkania;
	String zarobki;
	String nr_tel;
	String pesel;
	int ID;
	Date data_urodzenia;
	Rola* Rola;

public:
	String getImie();

	void startWork(int date);

	void stopWork(int date);

	void edit(int data);
};

#endif
