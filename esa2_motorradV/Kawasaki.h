#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
#include "Schaltzentralle.h"
#include "Fahrzeug.h"

//using namespace System;
using namespace std;


class Kawasaki : Fahrzeug{

private:
	string kawasakiName;

public:
	Kawasaki();
	Kawasaki(string kawasakiName);
	Kawasaki(int fahrzeugID, string fahrzeugname, int anzahlRaeder, int farbe, int bj, int status);
};
