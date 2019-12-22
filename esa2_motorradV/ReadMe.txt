========================================================================
    ANWENDUNG: esa2_motorradV-Projektübersicht
========================================================================

Diese esa2_motorradV-Anwendung wurde vom Anwendungs-Assistenten für Sie erstellt.  

Diese Datei enthält eine Zusammenfassung dessen, was Sie in jeder der Dateien
finden, aus denen Ihre esa2_motorradV-Anwendung besteht.

esa2_motorradV.vcproj
    Dies ist die Hauptprojektdatei für VC++-Projekte, die mit dem Anwendungs-
    Assistenten generiert werden. 
    Sie enthält Informationen über die Version von Visual C++, in der die Datei 
    generiert wurde, sowie über die Plattformen, Konfigurationen und 
    Projektfeatures, die im Anwendungs-Assistenten ausgewählt wurden.

esa2_motorradV.cpp
    Dies ist die Hauptquelldatei der Anwendung.

AssemblyInfo.cpp
	Enthält benutzerdefinierte Attribute zum Ändern von Assemblymetadaten.

/////////////////////////////////////////////////////////////////////////////
Weitere Hinweise:

Der Anwendungs-Assistent verwendet "TODO:", um auf Teile des Quellcodes
hinzuweisen, die Sie ergänzen oder anpassen sollten.

/////////////////////////////////////////////////////////////////////////////
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
