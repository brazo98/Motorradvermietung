#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Schaltzentralle.h"
#include "Fahrzeug.h"

class Suzuki : Fahrzeug
{
private:
	string suzukiName;
public:
	Suzuki();
	Suzuki(string hondaName);
	Suzuki(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status);
};
