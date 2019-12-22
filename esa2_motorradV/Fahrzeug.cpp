#include "StdAfx.h"
#include "Fahrzeug.h"

Fahrzeug::Fahrzeug()
{
}

Fahrzeug::Fahrzeug(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status){
	this->fahrzeugname = fahrzeugname;
	this->anzahlRaeder = anzahlRaeder;
	this->farbe = farbe;
	this->bj = bj;
	this->status = status;
	this->kundenID = -1;
}

void Fahrzeug::setKundenID(int id){
	this->kundenID = id;
}
int Fahrzeug::getKundenIDFromFahrzeuge(){
	return this->kundenID;
}

string Fahrzeug::getFahrzeugname(){
	return this->fahrzeugname;
}

int Fahrzeug::getanzahlRaeder(){
	return this->anzahlRaeder;
}

int Fahrzeug::getfarbe(){
	return this->farbe;
}

int Fahrzeug::getbj(){
	return this->bj;
}

void Fahrzeug::setStatus(int status){
	this->status = status;
}

void Fahrzeug::setfahrzeugID(int fahrzeugID){
	this->fahrzeugID = fahrzeugID;
}
int Fahrzeug::getfahrzeugID(){
	return this->fahrzeugID;
}

int Fahrzeug::getStatus(){
	return this->status;
}