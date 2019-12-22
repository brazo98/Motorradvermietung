#pragma once
#include "stdafx.h"
#include <iostream>
#include "rlutil.h"
#include <string>
#include <fstream>
#include <direct.h>
#include <stdlib.h>
#include <stdio.h>
#include "Kunde.h"
#include "Reservieren.h"
#include "Fahrzeug.h"
#include "Bmw.h"
#include "Honda.h"
#include "Kawasaki.h"
#include "Suzuki.h"
#include <vector>

using namespace System;
using namespace std;

//Enum für die Farbübermittlung
enum class farbe{
	blau,
	rot,
	gelb,
	guen,
	schwatz,
	weiss,
	lila
};

//Enum für Fahrzeugauswahl
enum class fahrzeugauswahl{
	SuzukiBandit,
	HondaTransAlp,
	BMW650GS,
	KawasakiZZR1400
};

class Model {
private:
	//Model Kunde;
	vector <Kunde> modelKunde;
	//Model Fahrzeug
	vector <Fahrzeug> modelFahrzeug;
	int line;

public:
	Model();
	//getterMethoden
	//getKunde
	Kunde getKundeFromModel(int id);
	vector <Fahrzeug> getModelFahrzeug();
	vector <Kunde> getModelKunde();

	//Methoden zum pushen
	void pushmodelKunde(Kunde &ku);
	void pushmodelFahrzeug(Fahrzeug &fz);
	
	//Display Fahrzeuge
	void tableHeader();
	void tableFooter(int _line);
	void displayFahrzeuge();

	//Display Kunden
	void tableHeaderKunde();
	void tablefooterKunde(int _line);
	void displayKunden();

	//Display Reserviert
	void tableHeaderReserviert();
	void tableFooterReserviert(int line);
	void tableDisplayReserviert(int i);

	//Ausgabe File
	bool is_file_exist(const char *fileName);
	void ausgabeFileHeader();
	void ausgabeFile(int i);


	//Manipulieren des Statues für die Reservation
	void setStatusVonFahrzeugAufEins(int id, int kdid);
	void setStatusVonFahrzeugAufNull(int id);
	void setKundenIDFahrzeugAufNull(int id);

	//Line wieder retoursetzen
	void setLine();
};