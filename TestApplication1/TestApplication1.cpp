/*
Author: D36l
Date: 24/01/18
Version: 1.0
Copyright - © - Davoleo - 2018
*/
#include "stdafx.h"
#include <iostream>
#include <limits>
#include <string>
//#define DEBUG <--- per la debug mode

//#define se if <--- define per la sostituzione


int main()
{
	using namespace std;

	//DICHIARAZIONE VARIABILI, MANNAGGIA ALLO SWITCH

	int x = 0, y = 0, z = 0;  //case 1: media
	int media2;
	//double media3 = (x + y + z) / 3; //divisione intera [NO decimali]
	double media4;
	int age = 0;			//case 2: età
	string day = "";		//case 3: lunedì
	double $ = 0;			//case 4: dollarieuro
	double € = 0;


	int scambio;
	cout << "Inserisci il numero della sezione del programma da eseguire: ";
	cin >> scambio;
	switch (scambio)

	{

	case 1:

		//SEZIONE 1: ESERCIZIO MEDIA

		//Data Input [Metodo separato]
		cout << "Inserire il primo numero: ";
		cin >> x;

		cout << "\nInserire il secondo numero ";
		cin >> y;

		cout << "\nInserire il terzo numero ";
		cin >> z;

		//Data Input [Metodo Single Line]
		//cout << "Inserisci 3 numeri interi separati da spazio: ";
		//cin >> a >> b >> c;

		//Processing
		media2 = (x + y + z) / 3; //divisione intera [NO decimali]
		media4 = (x + y + z) / 3.0;	 //divisione DECIMALE


										   //Data Output
		cout << "Media 2: " << media2 << endl;
		//cout << "Media 3: " << media3 << endl;
		cout << "Media decimale " << media4 << endl;

		if (x == media2)
		{
			cout << "Il primo numero e' uguale alla media intera" << endl;
		}
		if (y == media2)
		{
			cout << "Il secondo numero e' uguale alla media intera" << endl;
		}
		if (z == media2)
		{
			cout << "Il terzo numero e' uguale alla media intera" << endl;
		}

		break;

	case 2:
		//SEZIONE 2: ESERCIZIO ETA
		cout << "Inserisci la tua eta': ";
		cin >> age;

		if (age > 0 and age < 120)
		{
			if (age >= 18)
			{
				cout << "Sei Maggiorenne!" << endl;
			}
			else
			{
				cout << "Sei Minorenne!" << endl;
			}
		}
		else
		{
			cout << "Eta' non valida!" << endl;
		}




	
	//SEZIONE 3: LUNEDI
	case 3: 
	cout << "Che giorno e'? ";
	cin >> day;
	if (day == "lunedi")
	{
		cout << "Eh lo so... la vita e' una merda :P" << endl;
	}
	else
	{
		cout << "beh dai, ci sono giorni peggiori..." << endl;
	}
	
	break;

	case 4: 
		/*
	cout << "inserisci una somma in dollari ";
	cin >> $;
	cout << "inserisci una somma in euro ";
	cin >> €;
	if ($ > €*1.35)
	{
	cout << $ << " e' maggiore di " << € << endl;
	}
	if ($ = €*1.35)
	{
	cout << $ << " e' uguale a " << € << endl;
	}
	if ($ < €*1.35)
	{
	cout << $ << " e' minore di " << € << endl;
	}
	*/

		break;
	
	
	default: cout << "il niente non è un opzione" << endl;
		break;
	}
	
	
	
	//getchar(); richiesta di un carattere
	return 0;


}