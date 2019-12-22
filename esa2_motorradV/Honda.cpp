#include "StdAfx.h"
#include "Honda.h"
#include <string>

Honda::Honda()
{
}

Honda::Honda(std::string hondaName) : Fahrzeug(fahrzeugID, fahrzeugname, anzahlRaeder, farbe, bj, status) {
	//this->fahrzeugID = fahrzeugID;
	this->hondaName = hondaName;
	/*this->fahrzeugname = fahrzeugname;
	this->anzahlRaeder = anzahlRaeder;
	this->farbe = farbe;
	this->bj = bj;*/
}

Honda::Honda(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status) : Fahrzeug(fahrzeugID, fahrzeugname, anzahlRaeder, farbe, bj, status) {
	Fahrzeug::fahrzeugID = fahrzeugID;
	Fahrzeug::fahrzeugname = fahrzeugname;
	Fahrzeug::anzahlRaeder = anzahlRaeder;
	Fahrzeug::farbe= farbe;
	Fahrzeug::bj = bj;
	Fahrzeug::status = status;
}