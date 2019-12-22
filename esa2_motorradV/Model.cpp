#include "StdAfx.h"
#include "Model.h"


//Konstanten
const string SUZUKI = "Suzuki Bandit";
const string HONDA = "Honda TransAlp";
const string BMW = "BMW 650 GS";
const string KAWASAKI = "Kawasaki ZZR 1400";
const string FILEPATH = "c:\\temp\\";

//Konstruktor
Model::Model(){
	Suzuki suzuki(1, SUZUKI,2,(int)farbe::guen,2019,0);
	Honda honda(2, HONDA,2,(int)farbe::gelb,1980,0);
	Bmw bmw(3, BMW,2,(int)farbe::schwartz,2015,0);
	Kawasaki kawasaki(4, KAWASAKI,2,(int)farbe::gelb,1975,0);

	Fahrzeug *fzGSuzuki =(Fahrzeug *) &suzuki;
	modelFahrzeug.push_back(*fzGSuzuki);

	Fahrzeug *fzGHonda =(Fahrzeug *) &honda;
	modelFahrzeug.push_back(*fzGHonda);

	Fahrzeug *fzGBmw =(Fahrzeug *) &bmw;
	modelFahrzeug.push_back(*fzGBmw);

	Fahrzeug *fzGkawasaki =(Fahrzeug *) &kawasaki;
	modelFahrzeug.push_back(*fzGkawasaki);
}
//Methode übersetzt Zahl in Farbe
string Model::integerToStringFarbe(int color){
	switch (color){
		case farbe::blau:
			return "Blau";
			break;
		case farbe::gelb:
			return "Gelb";
			break;
		case farbe::guen:
			return "Gruen";
			break;
		case farbe::lila:
			return "Lila";
			break;
		case farbe::rot:
			return "Rot";
			break;
		case farbe::schwartz:
			return "Schwarz";
			break;
		case farbe::weiss:
			return "Weiss";
			break;
		default:
			return "";
	}
}
//Methode übersetzt Zahl in Status
string Model::integerToStringStatus(int status){
	switch(status){
		case translateStatus::frei:
			return "frei";
		case translateStatus::reserviert:
			return "reserviert";
		default:
			return "";
	}
}
//Methode zum setzen der Line
void Model::setLine(){
	this->line = 0;
}
//Methode gibt mir das ModelFahrzeug zurück
vector <Fahrzeug> Model::getModelFahrzeug(){
	return this->modelFahrzeug;
}
//Methode gibt mir das ModelKunde zurück
vector <Kunde> Model::getModelKunde(){
	return this->modelKunde;
}
//Methode setzt den Status von Fahrzeug auf den Wert 1
void Model::setStatusVonFahrzeugAufEins(int id, int kdid){
	//setze Status auf 1 und somit nicht mehr verfügbar
	this->modelFahrzeug[id].setStatus(1);
	//besetzt durch den Kunden!
	this->modelFahrzeug[id].setKundenID(kdid);
}
//Pandong Methode zu oben
void Model::setStatusVonFahrzeugAufNull(int id){
	this->modelFahrzeug[id].setStatus(0);
}
//Methode setzt KundenID auf 1
void  Model::setKundenIDFahrzeugAufNull(int id){
	this->modelFahrzeug[id].setKundenID(0);
}
//Methode gibt mir das Model an der Stelle der ID retour
Kunde Model::getKundeFromModel(int id){
	return this->modelKunde[id];
}
//Methode pushed mir den neuen Kunden ins Model
void Model::pushmodelKunde(Kunde &ku){
	this->modelKunde.push_back(ku);
}
//Methode pushed mir das Fahrzeug ins Model
void Model::pushmodelFahrzeug(Fahrzeug &fz){
	this->modelFahrzeug.push_back(fz);
}

//Methode für die Headerausgabe
void Model::tableHeader()
{
	//system("cls");
	gotoxy(1, 1);
	cout << "ID:";
	gotoxy(10, 1);
	cout << "Name:";
	gotoxy(35, 1);
	cout << "Rad:";
	gotoxy(40, 1);
	cout << "Farbe:";
	gotoxy(50, 1);
	cout << "Baujahr:";
	gotoxy(60, 1);
	cout << "Status:";

	for (int i = 0; i < 80; i++) {
		gotoxy(i, 2);
		cout << "-";
		
	}
	cout << "\n";
	cout << "\n";
}
//Methode Footer 
void Model::tableFooter(int _line){
	for (int i = 0; i < 80; i++) {
		gotoxy(i, this->line+3);
		cout << "-";
	}
	cout << "\n";
	cout << "\n";
	
}


//Methode für die Anzeige
void Model::displayFahrzeuge(){

	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);
	int line=3;

	try
	{
		for (unsigned int i = 0; i < modelFahrzeug.size(); i++)
		{
			gotoxy(1, line + i);
			cout << modelFahrzeug[i].getfahrzeugID();
			gotoxy(10, line + i);
			cout << modelFahrzeug[i].getFahrzeugname();
			gotoxy(35, line + i);
			cout << modelFahrzeug[i].getanzahlRaeder();
			gotoxy(40, line + i);
			cout << integerToStringFarbe(modelFahrzeug[i].getfarbe());
			gotoxy(50, line + i);
			cout << modelFahrzeug[i].getbj();
			gotoxy(60, line + i);
			cout << integerToStringStatus(modelFahrzeug[i].getStatus());
			
			this->line +=1;
		}
		cout << "\n";
		cout << "\n";
		
	}
	catch (const std::exception&)
	{
		cout << "Fehler passiert in Funktion Display\n";
	}
	

}

//Methode für die Headerausgabe Kunde
void Model::tableHeaderKunde()
{	
	//system("cls");
	gotoxy(1, 1);
	cout << "ID:";
	gotoxy(10, 1);
	cout << "Vorname:";
	gotoxy(25, 1);
	cout << "Nachname:";
	gotoxy(40, 1);
	cout << "Strasse/Nr:";
	gotoxy(60, 1);
	cout << "PLZ+Ort:";
	gotoxy(85, 1);
	cout << "Geburtsjahr:";
	gotoxy(100, 1);
	cout << "Tel:";
	gotoxy(110, 1);
	cout << "Fuehrerschein:";

	for (int i = 0; i < 120; i++) {
		gotoxy(i, 2);
		cout << "-";
		
	}
	
}
//Methode für die Ausgabe des Footers Kunde
void Model::tablefooterKunde(int _line){
	//for (int i = 0; i < 120; i++) {
	//	gotoxy(i, this->line+2);
	//	cout << "-";
	//}
	///*cout << "\n";
	//cout << "\n";*/
	for (int i = 0; i < 120; i++) {
		gotoxy(i, this->line+3);
		cout << "-";
	}
	cout << "\n";
	cout << "\n";
}
//Methode für die Ausgabe des Kunden
void Model::displayKunden(){

	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);
	int line=3;

	try
	{
		for (unsigned int i = 0; i < modelKunde.size(); i++)
		{
			gotoxy(1, line + i);
			cout << modelKunde[i].getKundenid();
			gotoxy(10, line + i);
			cout << modelKunde[i].getVorname();
			gotoxy(25, line + i);
			cout << modelKunde[i].getNachname();
			gotoxy(40, line + i);
			cout << modelKunde[i].getStrasse() << "/" << modelKunde[i].gethausnr();
			gotoxy(60, line + i);
			cout << modelKunde[i].getPLZ() << " " << modelKunde[i].getOrt();
			gotoxy(85, line + i);
			cout << modelKunde[i].getGeburtsjahr();
			gotoxy(100, line + i);
			cout << modelKunde[i].getTel();
			gotoxy(110, line + i);
			cout << modelKunde[i].getFueherschein();
			
			this->line +=1;
		}
		cout << "\n";
		cout << "\n";
		
	}
	catch (const std::exception&)
	{
		cout << "Fehler passiert in Funktion Display\n";
	}
	

}

//------------------------
//Ausgabe für die Reservierten Fahrzeuge!
//Methode für die Headerausgabe Reserviert
void Model::tableHeaderReserviert()
{
	//system("cls");
	gotoxy(1, 1);
	cout << "ID:";
	gotoxy(10, 1);
	cout << "Name:";
	gotoxy(35, 1);
	cout << "Rad:";
	gotoxy(40, 1);
	cout << "Farbe";
	gotoxy(50, 1);
	cout << "Baujahr:";
	gotoxy(60, 1);
	cout << "Status:";
	gotoxy(70, 1);
	cout << "Vorname:";
	gotoxy(85, 1);
	cout << "Nachname:";

	for (int i = 0; i < 100; i++) {
		gotoxy(i, 2);
		cout << "-";
		
	}
	cout << "\n";
	cout << "\n";
	
}
//Methode für die Footerausgabe reserviert
void Model::tableFooterReserviert(int _line){
	for (int i = 0; i < 100; i++) {
		gotoxy(i, this->line+3);
		cout << "-";
	}
	cout << "\n";
	cout << "\n";
	
}
//Methode für die Ausgabe reserviert
void Model::tableDisplayReserviert(int i){

	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);
	int line=3;

	try
	{
		
			gotoxy(1, line + i);
			cout << modelFahrzeug[i].getfahrzeugID();
			gotoxy(10, line + i);
			cout << modelFahrzeug[i].getFahrzeugname();
			gotoxy(35, line + i);
			cout << modelFahrzeug[i].getanzahlRaeder();
			gotoxy(40, line + i);
			cout << integerToStringFarbe(modelFahrzeug[i].getfarbe());
			gotoxy(50, line + i);
			cout << modelFahrzeug[i].getbj();
			gotoxy(60, line + i);
			cout << integerToStringStatus(modelFahrzeug[i].getStatus());
			gotoxy(70, line + i);
			cout << modelKunde[modelFahrzeug[i].getKundenIDFromFahrzeuge()-1].getVorname();
			gotoxy(85, line + i);
			cout << modelKunde[modelFahrzeug[i].getKundenIDFromFahrzeuge()-1].getNachname();
			this->line +=1;
		
		cout << "\n";
		cout << "\n";
		
	}
	catch (const std::exception&)
	{
		cout << "Fehler passiert in Funktion Display\n";
	}
}
//Checkfunktion zur Überprüfung ob das Directory schon besteht?
//Quelle: https://stackoverflow.com/questions/12774207/fastest-way-to-check-if-a-file-exist-using-standard-c-c11-c
bool Model::is_file_exist(const char *fileName){
    std::ifstream infile(fileName);
    return infile.good();
}
//Methode für die Ausgabe vom FileHeader
void Model::ausgabeFileHeader(){
	if (!is_file_exist("c:\\temp1\\")){
		_mkdir("c:\\temp1\\");
	}

	ofstream meinedaten;
	meinedaten.open("c:\\temp1\\reservierung.txt",ios::out , ios::_Openprot);
	if(!meinedaten){
		cerr << "Fehler beim Schreiben passiert" << endl;
		exit(1);
	}
	try
	{
		meinedaten.setf(ios::fixed | ios::showpoint);
		meinedaten.precision(2);
		int line=3;
		system("cls");
		gotoxy(1, 1);
		meinedaten << "ID:";
		gotoxy(10, 1);
		meinedaten << "Name:";
		gotoxy(35, 1);
		meinedaten << "Rad:";
		gotoxy(40, 1);
		meinedaten << "Farbe:";
		gotoxy(50, 1);
		meinedaten << "Baujahr:";
		gotoxy(60, 1);
		meinedaten << "Status:";
		gotoxy(70, 1);
		meinedaten << "Vorname:";
		gotoxy(85, 1);
		meinedaten << "Nachname:";

		meinedaten << "\n";
		meinedaten << "\n";

		meinedaten.close();
	}
	catch (const std::exception&)
	{
		meinedaten.close();
		cout << "Fehler passiert in Funktion Display\n";
	}

}
//Methode für die Ausgabe des Files
void Model::ausgabeFile(int i){
	if (!is_file_exist("c:\\temp1\\")){
		_mkdir("c:\\temp1\\");
	}

	ofstream meinedaten;
	meinedaten.open("c:\\temp1\\reservierung.txt",ios::out | ios::app);
	if(!meinedaten){
		cerr << "Fehler beim Schreiben passiert" << endl;
		exit(1);
	}
	
	try
	{
	
			gotoxy(1, line + i);
			meinedaten << modelFahrzeug[i].getfahrzeugID();
			gotoxy(10, line + i);
			meinedaten << modelFahrzeug[i].getFahrzeugname();
			gotoxy(35, line + i);
			meinedaten << modelFahrzeug[i].getanzahlRaeder();
			gotoxy(40, line + i);
			meinedaten << integerToStringFarbe(modelFahrzeug[i].getfarbe());
			gotoxy(50, line + i);
			meinedaten << modelFahrzeug[i].getbj();
			gotoxy(60, line + i);
			meinedaten << integerToStringStatus(modelFahrzeug[i].getStatus());
			gotoxy(70, line + i);
			meinedaten << modelKunde[modelFahrzeug[i].getKundenIDFromFahrzeuge()-1].getVorname();
			gotoxy(85, line + i);
			meinedaten << modelKunde[modelFahrzeug[i].getKundenIDFromFahrzeuge()-1].getNachname();
			
			this->line +=1;
		
		meinedaten << "\n";
		meinedaten << "\n";
		meinedaten.close();
		
	}
	catch (const std::exception&)
	{
		meinedaten.close();
		cout << "Fehler passiert in Funktion Display\n";
	}
}

	
		