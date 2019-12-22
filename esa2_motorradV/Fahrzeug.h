#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Schaltzentralle.h"


//using namespace System;
using namespace std;
 class Fahrzeug
{
protected:
	int fahrzeugID;
	string fahrzeugname;
	int anzahlRaeder;
	int farbe;
	int bj;
	int status;
	int kundenID;

public:
	
	Fahrzeug();
	Fahrzeug(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status);
	string getFahrzeugname();
	int getanzahlRaeder();
	int getfarbe();
	int getbj();
	void setStatus(int status);
	int getStatus();
	void setfahrzeugID(int fahrzeugID);
	int getfahrzeugID();
	void setKundenID(int id);
	int getKundenIDFromFahrzeuge();

	
};
