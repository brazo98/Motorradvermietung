#include "StdAfx.h"
#include "Kunde.h"

Kunde::Kunde(){
	this->kundenid;
}

Kunde::Kunde(int kundenid, string vorname, string nachname, string strasse, string hausnr, string plz, string ort, string geb, string tel, bool fuehr)
{
	this->kundenid = kundenid;
	this->vorname = vorname;
	this->nachname = nachname;
	this->strasse = strasse;
	this->hausnr = hausnr;
	this->plz = plz;
	this->ort = ort;
	this->geburtsjahr = geb;
	this->tel = tel;
	this->fuehrerschein = fuehr;
}


void Kunde::pushModelFahrzeuge(Fahrzeug &model){
	this->modelFahrzeuge.push_back(model);
}

void Kunde::istbereitsReserviert(void){
	cout << "Ist bereits reserviert!\n";
}

void Kunde::pushModel(Reservieren &model){
	this->modelReservieren.push_back(model);
}

int Kunde::getKundenid(){
	return this->kundenid;
}
string Kunde::getVorname(){
	return this->vorname;
}
string Kunde::getNachname(){
	return this->nachname;
}
string Kunde::getStrasse(){
	return this->strasse;
}
string Kunde::gethausnr(){
	return this->hausnr;
}
string Kunde::getPLZ(){
	return this->plz;
}
string Kunde::getOrt(){
	return this->ort;
}
string Kunde::getGeburtsjahr(){
	return this->geburtsjahr;
}
string Kunde::getTel(){
	return this->tel;
}
bool Kunde::getFueherschein(){
	return this->fuehrerschein;
}
