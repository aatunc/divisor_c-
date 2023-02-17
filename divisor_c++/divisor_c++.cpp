// divisor_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;
int main()
{
	int start = 0;
	int end = 0;
	int divisor = 0;
	int i = 0;
	cout << "Ganzzahlige Division\n";
	cout << "====================\n";
	cout << "Geben Sie erste diviten ein: ";
	cin >> start;
	cout << "Geben Sie den zweiten Diviten ein: ";
	cin >> end;
	cout <<"Geben Sie den Divisor: "; 
	cin >> divisor;
	for (i = start; i <= end; i++) {
		cout << i << " / " << divisor << " = " << i / divisor;
		cout << " Rest " << i % divisor << "\n";
	}
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
