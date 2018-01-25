// Test1.cpp: definisce il punto di ingresso dell'applicazione console.
/*
Author: D36l
Date: 24/01/18
Version: 1.0
Copyright - © - Davoleo - 2018
*/


//quando sono presenti le <> significa che è una libreria di default
//quando sono presenti le "" significa che è una libreria customizzata

#include "stdafx.h"
#include <iostream>


int main()
{
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

	//input stream = cin
	int euro = 0;
	cout << "Inserisci il valore in euro: ";
	cin >> euro;
	cout << euro << endl;




	getchar();
	return 0;
}
