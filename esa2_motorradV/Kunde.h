#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Schaltzentralle.h"
#include "Reservieren.h"
#include <vector>

//using namespace System;
using namespace std;

class Kunde : Schaltzentralle
{
private:
	vector <Reservieren> modelReservieren;
	vector <Fahrzeug> modelFahrzeuge;

protected:
	int kundenid;
	string vorname;
	string nachname;
	string strasse;
	string hausnr;
	string plz;
	string ort;
	string geburtsjahr;
	string tel;
	bool fuehrerschein;

public:
	Kunde();
	Kunde(int kundenid, string vorname, string nachname, string strasse, string hausnr, string plz, string ort, string geb, string tel, bool fuehr);
	void istbereitsReserviert(void);
	void pushModel(Reservieren &model);
	void pushModelFahrzeuge(Fahrzeug &model);
	int getKundenid();
	string getVorname();
	string getNachname();
	string getStrasse();
	string gethausnr();
	string getPLZ();
	string getOrt();
	string getGeburtsjahr();
	string getTel();
	bool getFueherschein();
	
};
