#pragma once

#include <iostream>
using namespace std;

class Uzytkownik {
	string imie;
	string nazwisko;
	string numer_konta;
	string email;
};


class Data {
	friend class Baza;
	int dzien;
	int miesiac;
	int rok;
};

class Historia {
	friend class Baza;
	Data data;
	double wartosc;
	string odbiorca;
	string nadawca;
};

class Kontakty {
	friend class Baza;
	string imie;
	string nazwisko;
	string numer_konta;
};

class Saldo {
	friend class Baza;
	double euro;
	double funt;
	double zloty;
	double dolar;
};

class Kurs {
	friend class Baza;
	double euro;
	double funt;
	double zloty;
	double dolar;
};