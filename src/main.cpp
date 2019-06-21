//============================================================================
// Name        : Barcode.cpp
// Author      : Alessandro
// Version     :
// Copyright   : Mit copy
// Description : Ansi-style
//============================================================================
bool debug = false;

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include "boxData.h"
#include "various.h"
#include "threads.h"
using namespace std;



void menu() {
	cout << "Menù principale:" << endl;
	cout << "1 Inserisci pacchi" << endl;
	cout << "2 Leggi" << endl;
	cout << "3 Esci pacco" << endl;
	cout << "-1 Stop program" << endl;
	cout << "---------------------" << endl;
	cout << endl;
}

int main() {

	scatola* list = 0;

	int input;
	bool going = true;
	string id;

	pthread_t threadbello[2];
	myswap *s = new myswap(list);

	pthread_create(&threadbello[0], NULL, low_stock_check, s);
	//pthread_create(&threadbello[1], NULL, cose, s);

	while (going) {
		menu();
		cin >> input;
		switch (input) {
		case (1):
			cout << "input pacchi" << endl;
			leggi(list);
			break;
		case (2):
			cout << "lista pacchi" << endl;
			cout << "Codice pacco - numero pacchi" << endl;
			stampa(list);
			break;
		case (3):
			cout << "uscita pacchi" << endl;
			cin >> id;
			cancellaScatola(list, id);
			break;
		case (-1):
			cout << "Bye";
			going = false;
			break;
		default:
			cout << "Selezione errata" << endl;
			break;
		}
	}
	return 0;
	pthread_join(threadbello[0], NULL);
	pthread_join(threadbello[1], NULL);
}
