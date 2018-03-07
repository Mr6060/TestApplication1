// TestApplication1.cpp: definisce il punto di ingresso dell'applicazione console.
/*
Author: D36l
Date: 24/01/18
Version: 1.0
Copyright - © - Davoleo - 2018
*/

/* Catena della programmazione
Codice sorgente/editor > Preprocessore > Compilatore > codice oggetto > linker > loader > codice eseguibile*/

//Stile
//1) definizione e inizializzazione strutture dati [variabili]
//2) acquisizione dei dati INDISPENSABILI [INPUT]
//3) elaborazione dei dati [calcoli ecc..] {PROCESSING}
//4) comunicazione dei risultati [OUTPUT]

//quando sono presenti le <> significa che è una libreria di default
//quando sono presenti le "" significa che è una libreria customizzata

#include "stdafx.h"
#include <iostream>
#include <limits>
//#define DEBUG <--- per la debug mode

//#define se if <--- define per la sostituzione


int main()
{
#define MEDIA

#ifdef HUB
	//metodi (Warning) per eliminare l'std all'inizio della linea
	using namespace std;
	//metodo meno rischioso ma meno esteso
	//using std::cout

	//stampa su schermo 
	//std = libreria standard
	//cout = output sulle periferiche
	// il << invia (in questo caso stampa su schermo)

	//cout << "ciao\n";
	//cout << 5;

	//Shift dei numeri binari
	//3 in binario shiftato di 2 posizioni a sinistra

	//3 << 2;
	//cout << (3 << 2) << std::endl;

	//built-in
	//operatori integrali: bool - char - int
	//operatori floating point: float - double

	//lvalue = espressione di sinistra (container)
	//rvalue = espressione di destra (valore)

	//Quanti bit utilizza un certo tipo

	
	
	cout << "Size of short: " << sizeof(short) << " bytes" << endl;
	cout << "Size of int: " << sizeof(int) << " bytes" << endl;
	cout << "Size of long: " << sizeof(long) << " bytes"  << endl;
	cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;

	//unsigned --> per i senza segno

	cout << INT_MAX << endl;
	cout << "Max int con segno: " << numeric_limits<int>::max() << endl;
	cout << "Min int con segno: " << numeric_limits<int>::min() << endl;
	cout << "Max int senza segno: " << numeric_limits<unsigned int>::max() << endl;
	cout << "Max long long senza segno: " << numeric_limits<unsigned long long>::max() << endl;

	//input stream = cin
	int euro = 0;
	double cambio = 1;
	
	cout << "Inserisci il valore in euro: ";
	cin >> euro;
	cout << "Euro letti: " << euro << endl;

	//Struttura selettiva IF - ELSE
	if (euro <= 0)
	{
		cout << "Inserisci un numero positivo plz!" << endl;
	}
	else
	{
		cout << "Fattore di cambio? ";
		cin >> cambio;
		if (cambio >= 0)
		{
			cout << "cambio letto: " << cambio << endl;
			cout << "In moneta cambiata: " << euro * cambio << endl;
		}
		else
		{
			cout << "Il cambio non può essere negativo" << endl;
		}
	}

	//Addizione tra due input
	int a = 0, b = 0;
		cout << "Inserisci il primo addendo: ";
		cin >> a;
		cout << "Inserisci il secondo addendo: ";
		cin >> b;
		cout << "risultato: " << a + b << endl;

		//Costanti letterali e numeri sosia
		
		int sosia1 = 060;		//costante ottale
		int sosia2 = 0x30;		//costante esadecimale
		int sosia3 = 48;		//costante letterale decimale 
		int sosia4 = 0b110000;	//costante binaria

		cout << "Sosia 1: " << sosia1 << endl;
		cout << "Sosia 2: " << sosia2 << endl;
		cout << "Sosia 3: " << sosia3 << endl;
		cout << "Sosia 4: " << sosia4 << endl;

		unsigned int us = 40000U;
		 
		/*unsigned long schifoso = 0xF0UL;
		long sentimentale = 0xFEEL;
		cout << schifoso << endl;
		cout << sentimentale << endl;*/

#endif
		
#ifdef MEDIA
		using namespace std;

		//Var creation
		int a = 0, b = 0, c = 0;

		//Data Input [Metodo separato]
		cout << "Inserire il primo numero: ";
		cin >> a;

		cout << "\nInserire il secondo numero ";
		cin >> b;

		cout << "\nInserire il terzo numero ";
		cin >> c;

		//Data Input [Metodo Single Line]
		//cout << "Inserisci 3 numeri interi separati da spazio: ";
		//cin >> a >> b >> c;

		//Processing
		int somma = 0;
		somma = a + b + c;

		int media1 = somma / 3; //divisione intera [NO decimali]

		int media2 = (a + b + c) / 3; //divisione intera [NO decimali]

		double media3 = (a + b + c) / 3; //divisione intera [NO decimali]

		double media4 = (a + b + c) / 3.0; //divisione DECIMALE

										   //Data Output
		cout << somma << endl;
		cout << "Media 1: " << media1 << endl;
		cout << "Media 2: " << media2 << endl;
		cout << "Media 3: " << media3 << endl;
		cout << "Media 4: " << media4 << endl;
#endif

	//getchar(); richiesta di un carattere
	return 0;
}
