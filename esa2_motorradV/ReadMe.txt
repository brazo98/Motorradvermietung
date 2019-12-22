========================================================================
    ANWENDUNG: esa2_motorradV-Projekt�bersicht
========================================================================

Diese esa2_motorradV-Anwendung wurde vom Anwendungs-Assistenten f�r Sie erstellt.  

Diese Datei enth�lt eine Zusammenfassung dessen, was Sie in jeder der Dateien
finden, aus denen Ihre esa2_motorradV-Anwendung besteht.

esa2_motorradV.vcproj
    Dies ist die Hauptprojektdatei f�r VC++-Projekte, die mit dem Anwendungs-
    Assistenten generiert werden. 
    Sie enth�lt Informationen �ber die Version von Visual C++, in der die Datei 
    generiert wurde, sowie �ber die Plattformen, Konfigurationen und 
    Projektfeatures, die im Anwendungs-Assistenten ausgew�hlt wurden.

esa2_motorradV.cpp
    Dies ist die Hauptquelldatei der Anwendung.

AssemblyInfo.cpp
	Enth�lt benutzerdefinierte Attribute zum �ndern von Assemblymetadaten.

/////////////////////////////////////////////////////////////////////////////
Weitere Hinweise:

Der Anwendungs-Assistent verwendet "TODO:", um auf Teile des Quellcodes
hinzuweisen, die Sie erg�nzen oder anpassen sollten.

/////////////////////////////////////////////////////////////////////////////
WS19/20: ESA2: Zweite Einsendeaufgabe (Motorradvermietung)
ESA2 (Leistungsnachweis) zum vhb-Kurs �C++ Teil2�
Achten Sie auf termingerechte Abgabe (Upload) der Arbeiten im Kurs
Bewertungsrelevante Anforderungen:
Quellcode (.cpp oder .txt)
[Bitte den Quellcode nicht auf mehrere Dateien verteilen!]
eine ausf�hrbare Datei (.exe).
Die ESA muss als Einzelleistung erbracht werden (keine Teamarbeit !)
Aufgabenstellung:
Sie sollen ein Programm zur Verwaltung von Motorr�dern in C++ realisieren.
Motorradvermietung
Sie sind f�r die Verwaltung von Motorr�dern zust�ndig. Da zurzeit alle Vorg�nge in Papierform festgehalten werden, sollen Sie ein Programm zur Motorradverwaltung erstellen.
Die Mitarbeiterin soll die M�glichkeit haben, die Kunden zu verwalten und Reservierungen der Motorr�der vorzunehmen. Der Kunde kann nur jeweils ein Motorrad reservieren. Es gibt insgesamt 4 Motorr�der zur Auswahl: �Suzuki Bandit�, �Honda TransAlp�, �BMW F 650 GS� und �Kawasaki ZZR1400�. Stellen Sie sicher, dass ein Motorrad nicht doppelt reserviert wird. Bei der Reservierung muss der Kunde: Name, Vorname, Adresse (Stra�e, Nr. PLZ, Ort), Geburtsjahr, Telefonnummer und ob er F�hrerschein der Klasse A besitzt, angeben. Besitzt er kein F�hrerschein der Klasse A, so kann kein Motorrad f�r ihn reserviert werden. Sobald die �bergabe des Motorrads erfolgt ist, wird die Reservierung f�r diesen Kunden storniert. Der aktuelle Stand von �heute� soll in die Datei �reservierungen.txt� geschrieben werden.
Das Programm soll mindestens folgende Anforderungen erf�llen:
Verwaltung der Kunden:
Daten erfassen. Die Erfassung der Daten soll �ber istream (>>) Operator�berladung erfolgen.
Alle Kundendaten ausgeben. Die Ausgabe soll �ber ostream (<<) Operator�berladung erfolgen.
Verwaltung der Reservierungen:
Reservierung vornehmen
Motorrad herausgeben (mit der Abfrage des Kundenvor- und nachnamens)
Dateiverwaltung:
Der aktuelle Stand der Reservierungen soll in die Datei �reservierungen.txt� geschrieben werden. Falls die Datei noch nicht existiert soll sie angelegt werden, ansonsten sollen die Daten an das Ende der Datei angeh�ngt werden. Lesen der Daten aus der Datei ist nicht gefordert!
Die Verwaltung der Kunden soll dynamisch erfolgen. Bei Bedarf sollen entsprechende (Fehler-) Meldungen ausgegeben werden. Achten Sie auf eine angemessene Dokumentation Ihres Programms!
