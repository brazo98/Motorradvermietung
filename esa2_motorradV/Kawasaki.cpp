#include "StdAfx.h"
#include "Kawasaki.h"


Kawasaki::Kawasaki(string kawasakiName) : Fahrzeug(fahrzeugID, fahrzeugname, anzahlRaeder, farbe, bj,status) {
	this->kawasakiName = kawasakiName;
}

Kawasaki::Kawasaki(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status) : Fahrzeug(fahrzeugID, fahrzeugname, anzahlRaeder, farbe, bj, status) {
	Fahrzeug::fahrzeugID = fahrzeugID;
	Fahrzeug::fahrzeugname = fahrzeugname;
	Fahrzeug::anzahlRaeder = anzahlRaeder;
	Fahrzeug::farbe= farbe;
	Fahrzeug::bj = bj;
	Fahrzeug::status = status;
}
