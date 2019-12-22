#include "StdAfx.h"
#include "Bmw.h"

Bmw::Bmw()
{
}
Bmw::Bmw(std::string bmwName) : Fahrzeug(fahrzeugID, fahrzeugname, anzahlRaeder, farbe, bj, status) {
	//this->fahrzeugID = fahrzeugID;
	this->bmwName = bmwName;
	/*this->fahrzeugname = fahrzeugname;
	this->anzahlRaeder = anzahlRaeder;
	this->farbe = farbe;
	this->bj = bj;*/
}

Bmw::Bmw(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status) : Fahrzeug(fahrzeugID, fahrzeugname, anzahlRaeder, farbe, bj, status) {
	Fahrzeug::fahrzeugID = fahrzeugID;
	Fahrzeug::fahrzeugname = fahrzeugname;
	Fahrzeug::anzahlRaeder = anzahlRaeder;
	Fahrzeug::farbe= farbe;
	Fahrzeug::bj = bj;
	Fahrzeug::status = status;
}
