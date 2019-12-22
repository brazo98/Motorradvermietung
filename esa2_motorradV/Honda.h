#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Schaltzentralle.h"
#include "Fahrzeug.h"

class Honda : Fahrzeug
{
private:
	string hondaName;

public:
	Honda();
	Honda(string hondaName);
	Honda(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status);
};
