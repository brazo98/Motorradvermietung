#include "StdAfx.h"
#include "Kunde.h"
#include "Reservieren.h"

Reservieren::Reservieren(bool reserviert, string motorrad, Fahrzeug fahrzeug) 
{
	this->reserviert = reserviert;
	this->motorrad = motorrad;
	this->uebergabe = true;
	this->_fahrzeug = _fahrzeug;
}

void Reservieren::istbereitsReserviert(void){
	cout << "Ist bereits reserviert!\n";
}

