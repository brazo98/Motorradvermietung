/*
Author: Toni Mikitsch
Aufgabe: WS19/20: ESA2 Zweite Einsendeaufgabe 
(Motorradvermietung)
ESA2 (Leistungsnachweis) zum vhb-Kurs "C++ Teil2"
Datum: 04.12.2019
Erstelldatum 02.12.2019
Änderungsdatum: 04.12.2019
Name-Datei: esa2_motorradV.cpp
Version: 1.0
*/

/*README
WS19/20: ESA2: Zweite Einsendeaufgabe (Motorradvermietung)
ESA2 (Leistungsnachweis) zum vhb-Kurs „C++ Teil2“
Achten Sie auf termingerechte Abgabe (Upload) der Arbeiten im Kurs
Bewertungsrelevante Anforderungen:
Quellcode (.cpp oder .txt)
[Bitte den Quellcode nicht auf mehrere Dateien verteilen!]
eine ausführbare Datei (.exe).
Die ESA muss als Einzelleistung erbracht werden (keine Teamarbeit !)
Aufgabenstellung:
Sie sollen ein Programm zur Verwaltung von Motorrädern in C++ realisieren.
Motorradvermietung
Sie sind für die Verwaltung von Motorrädern zuständig. Da zurzeit alle Vorgänge in Papierform festgehalten werden, sollen Sie ein Programm zur Motorradverwaltung erstellen.
Die Mitarbeiterin soll die Möglichkeit haben, die Kunden zu verwalten und Reservierungen der Motorräder vorzunehmen. Der Kunde kann nur jeweils ein Motorrad reservieren. Es gibt insgesamt 4 Motorräder zur Auswahl: „Suzuki Bandit“, „Honda TransAlp“, „BMW F 650 GS“ und „Kawasaki ZZR1400“. Stellen Sie sicher, dass ein Motorrad nicht doppelt reserviert wird. Bei der Reservierung muss der Kunde: Name, Vorname, Adresse (Straße, Nr. PLZ, Ort), Geburtsjahr, Telefonnummer und ob er Führerschein der Klasse A besitzt, angeben. Besitzt er kein Führerschein der Klasse A, so kann kein Motorrad für ihn reserviert werden. Sobald die Übergabe des Motorrads erfolgt ist, wird die Reservierung für diesen Kunden storniert. Der aktuelle Stand von „heute“ soll in die Datei „reservierungen.txt“ geschrieben werden.
Das Programm soll mindestens folgende Anforderungen erfüllen:
Verwaltung der Kunden:
Daten erfassen. Die Erfassung der Daten soll über istream (>>) Operatorüberladung erfolgen.
Alle Kundendaten ausgeben. Die Ausgabe soll über ostream (<<) Operatorüberladung erfolgen.
Verwaltung der Reservierungen:
Reservierung vornehmen
Motorrad herausgeben (mit der Abfrage des Kundenvor- und nachnamens)
Dateiverwaltung:
Der aktuelle Stand der Reservierungen soll in die Datei „reservierungen.txt“ geschrieben werden. Falls die Datei noch nicht existiert soll sie angelegt werden, ansonsten sollen die Daten an das Ende der Datei angehängt werden. Lesen der Daten aus der Datei ist nicht gefordert!
Die Verwaltung der Kunden soll dynamisch erfolgen. Bei Bedarf sollen entsprechende (Fehler-) Meldungen ausgegeben werden. Achten Sie auf eine angemessene Dokumentation Ihres Programms!
*/



// esa2_motorradV.cpp: Hauptprojektdatei.


#include "stdafx.h"
#include <iostream>
#include "rlutil.h"
#include <string>
#include "Kunde.h"
#include "Reservieren.h"
#include "Fahrzeug.h"
#include "Bmw.h"
#include "Honda.h"
#include "Kawasaki.h"
#include "Suzuki.h"
#include "Model.h"
#include <vector>

using namespace System;
using namespace std;




//statische Variablen
static int id=0;

//Konstanten
const string SUZUKI = "Suzuki Bandit";
const string HONDA = "Honda TransAlp";
const string BMW = "BMW 650 GS";
const string KAWASAKI = "Kawasaki ZZR 1400";



//
////Enum für Fahrzeugauswahl
//enum class fahrzeugauswahl{
//	SuzukiBandit,
//	HondaTransAlp,
//	BMW650GS,
//	KawasakiZZR1400
//};

//Struct für neuen Kunden
struct neuKunde{
	int kundenid;
	string vorname;
	string nachname;
	string strasse;
	string hausnr;
	string plz;
	string ort;
	string geburtsjahr;
	string tel;
	bool fuehrerschein;
};

//Struct für neues Motorrad
struct neuFahrzeug{
	int fahrzeugID;
	string fahrzeugname;
	int anzahlRaeder;
	int farbe;
	int bj;
	int status;
};



int main(array<System::String ^> ^args)
{
	//Ein paar Hilfsvariablen
	int auswahlFahrzeugID=0;
	int auswahlKundenID=0;
	int sucheKunde=0;
	char janein='n';
	//Meine Objektinstanzen
	Model mo;
	neuKunde nk;
	neuFahrzeug nf;
	Kunde *ku; 

	do{

		
		//Mein neues Dashboard
		system("cls");
		gotoxy(29, 2);  cout << "=====MotorradvermietungTHD=====";
		gotoxy(29, 3);  cout << "1. Kunde erstellen             ";
		gotoxy(29, 4);  cout << "2. Reservierung                ";
		gotoxy(29, 5);  cout << "3. Motorraeder Anzeigen         ";
		gotoxy(29, 6);  cout << "4. Ubergabe Motorrad           ";
		gotoxy(29, 7);  cout << "5. ----------------            ";
		gotoxy(29, 8);  cout << "6. Reserviert                  ";
		gotoxy(29, 9);  cout << "7. THD                         ";
		gotoxy(29, 10); cout << "8. Quit                        ";
		gotoxy(29, 11); cout << "===============================";

		char menu1; 
	repeat:
		gotoxy(29, 13);
		cout << "Ihre Auswahl: ";
		menu1 = getch();
		
		//Switchroutine für die Abfrage der Auswahl
		switch (menu1){
		
			case '1': //Kunden erstellen
				system("cls");
				id +=1;
				nk.kundenid = id;
				Console::WriteLine("Bitte vorname eingeben: ");
				cin >> nk.vorname;
				Console::WriteLine("Bitte Nachname eingeben: ");
				cin >> nk.nachname;
				Console::WriteLine("Bitte Strasse eingeben: ");
				cin >> nk.strasse;
				Console::WriteLine("Bitte Hausnr eingeben: ");
				cin >> nk.hausnr;
				Console::WriteLine("Bitte PLZ eingeben: ");
				cin >> nk.plz;
				Console::WriteLine("Bitte Ort eingeben: ");
				cin >> nk.ort;
				Console::WriteLine("Bitte Geburtsjahr eingeben: ");
				cin >> nk.geburtsjahr;
				Console::WriteLine("Bitte Telefonnr. eingeben: ");
				cin >> nk.tel;
				Console::WriteLine("Haben Sie einen gueltigen Fuehrerschein? 1=ja, 0=nein: ");
				cin >> nk.fuehrerschein;
				try	{
					ku = new Kunde(nk.kundenid,nk.vorname,nk.nachname,nk.strasse, nk.hausnr, nk.plz,nk.ort,nk.geburtsjahr, nk.tel, nk.fuehrerschein);
					mo.pushmodelKunde(*ku);
				}catch(exception& e){
					Console::WriteLine("Fehler passiert beim erstellen des Kunden: ");
					cout << "Fehlercode: " << e.what();
				}finally{
					delete ku;
				}
				mo.setLine();
				system("pause");
				break;
			case '2': //Reservieren
				//---------------------------Motorradauswahl
				if(!mo.getModelKunde().empty() ){
					system("cls");
					mo.tableHeaderKunde();
					mo.displayKunden();
					mo.tablefooterKunde(0);
					Console::WriteLine("Auf welchen Kunden soll reserviert werden: \n");
					cin >> auswahlKundenID;
					cout << "\n";

					
					
					//Hier frage ich den Status ab vom Kunden damit dieser nicht doppelt buchen kann
					for(unsigned int i=0; i < mo.getModelFahrzeug().size();i++ ){
						if (mo.getModelFahrzeug()[i].getKundenIDFromFahrzeuge() == auswahlKundenID){
							sucheKunde = mo.getModelFahrzeug()[i].getKundenIDFromFahrzeuge();
							sucheKunde = i;
							break;
						}else {
							sucheKunde = auswahlKundenID -1;
						}
					}

					if (mo.getModelKunde()[auswahlKundenID-1].getFueherschein()==false){
						break;
					}

					if(mo.getModelFahrzeug()[sucheKunde].getKundenIDFromFahrzeuge() ==-1 || mo.getModelFahrzeug()[sucheKunde].getKundenIDFromFahrzeuge() ==0 ){
									system("cls");
									mo.tableHeader();
									mo.displayFahrzeuge();
									mo.tableFooter(0);				
									
									Console::WriteLine("Welches Motorrad wollen sie dem o.g.Kunden zuweisen?: ");
									Console::WriteLine("Alle Fahrzeug die Status 0 haben sind verfuegbar: ");
									cin >> auswahlFahrzeugID;
									
									mo.setStatusVonFahrzeugAufEins(auswahlFahrzeugID-1,auswahlKundenID);
									mo.setLine();
									
									break;
				
					}
				}
				system("pause");
  				break;
			
			case '3': //Motorräder Anzeigen
				system("cls");
				mo.tableHeader();
				mo.displayFahrzeuge();
				mo.tableFooter(0);
				system("pause");
				mo.setLine();
				break;
			case '4':  //Übergabe--
				system("cls");
				mo.setLine();
				if(!mo.getModelFahrzeug().empty() && (!mo.getModelKunde().empty())){
					mo.tableHeaderReserviert();
					for(unsigned int i=0; i< mo.getModelFahrzeug().size(); i++){
						if (mo.getModelFahrzeug()[i].getStatus() == 1){
							
							mo.tableDisplayReserviert(i);
						
						}
					}
					
				}
				if(!mo.getModelFahrzeug().empty() && (!mo.getModelKunde().empty())){
					Console::WriteLine("Welches Motorrad wurde uebergeben? Bitte ID eingeben!: ");
					cin >> auswahlFahrzeugID;
					mo.setStatusVonFahrzeugAufNull(auswahlFahrzeugID-1);
					mo.setKundenIDFahrzeugAufNull(auswahlFahrzeugID-1);

					system("cls");
					mo.setLine();
					
					if(!mo.getModelFahrzeug().empty()){
						mo.tableHeaderReserviert();
						for(unsigned int i=0; i< mo.getModelFahrzeug().size(); i++){
							if (mo.getModelFahrzeug()[i].getStatus() == 1){
								
								mo.tableDisplayReserviert(i);
							
							}
						}
						
					}
					mo.setLine();
				}
				system("pause");
				break;
			case '5': //--
				system("cls");
				mo.setLine();
				system("pause");

				break;
			case '6': // Reservierten Datensätze anzeigen
				system("cls");
				mo.setLine();
				if(!mo.getModelFahrzeug().empty() && (!mo.getModelKunde().empty())){
					mo.tableHeaderReserviert();
					for(unsigned int i=0; i< mo.getModelFahrzeug().size(); i++){
						if (mo.getModelFahrzeug()[i].getStatus() == 1){
							
							mo.tableDisplayReserviert(i);
						
						}
					}
					
					Console::WriteLine("Wollen Sie die Reservierungen in ein File schreiben: j/n");
					cin >> janein;

					if (janein=='j'){
						mo.ausgabeFileHeader();
						for(unsigned int i=0; i< mo.getModelFahrzeug().size(); i++){
							if (mo.getModelFahrzeug()[i].getStatus() == 1){
								mo.ausgabeFile(i);
							}
						}
						system("cls");
						cout << "Die Datei wurde auf c:\"\\temp1\"\\reservierungen.txt geschrieben!\"\ \n" << endl;
					}else{
						//do nothing
					}

				}
				
				mo.setLine();
				
				system("pause");
				break;
			case '7': //About THD
				cout << "THD Angewandte Informatik www.thg.de\n";
				mo.setLine();
				system("pause");
				break;
			case '8': //Exit Ausgang aus dem Programm
				exit(0);

			default:
				mo.setLine();
				gotoxy(29, 15);  cout << "Falsche Eingabe";
				getch(); gotoxy(29, 15); system("cls");
				goto repeat;
		}

	}while(true); //Wird wiederholt bis case:8 kommt!
	system("pause");
   
    return 0;
}
