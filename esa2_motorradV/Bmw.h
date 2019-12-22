#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Schaltzentralle.h"
#include "Fahrzeug.h"

//using namespace System;
using namespace std;

class Bmw : Fahrzeug
{
private:
	string bmwName;

public:
	Bmw();
	Bmw(string bmwName);
	Bmw(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status);
};
