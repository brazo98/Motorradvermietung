#include "StdAfx.h"
#include "Suzuki.h"

Suzuki::Suzuki(void)
{
}

Suzuki::Suzuki(std::string suzukiName) : Fahrzeug(fahrzeugID, fahrzeugname, anzahlRaeder, farbe, bj, status) {
	//this->fahrzeugID = fahrzeugID;
	this->suzukiName = suzukiName;
	/*this->fahrzeugname = fahrzeugname;
	this->anzahlRaeder = anzahlRaeder;
	this->farbe = farbe;
	this->bj = bj;*/
}

Suzuki::Suzuki(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status) : Fahrzeug(fahrzeugID, fahrzeugname, anzahlRaeder, farbe, bj, status) {
	Fahrzeug::fahrzeugID = fahrzeugID;
	Fahrzeug::fahrzeugname = fahrzeugname;
	Fahrzeug::anzahlRaeder = anzahlRaeder;
	Fahrzeug::farbe= farbe;
	Fahrzeug::bj = bj;
	Fahrzeug::status = status;
}