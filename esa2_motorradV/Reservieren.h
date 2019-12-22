#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Schaltzentralle.h"
#include "Fahrzeug.h"

//using namespace System;
using namespace std;

class Reservieren : Schaltzentralle{
private:
	bool reserviert;
	string motorrad;
	bool uebergabe;
	Fahrzeug _fahrzeug;

public:
	Reservieren();
	Reservieren(bool reserviert, string motorrad, Fahrzeug fahrzeug);
	void istbereitsReserviert(void);

};