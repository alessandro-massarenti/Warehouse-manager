//============================================================================
// Name        : Barcode.cpp
// Author      : Alessandro
// Version     :
// Copyright   : Mit copy
// Description : Hello World in C++, Ansi-style
//============================================================================
bool debug = false;

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include "data.h"
using namespace std;

void leggi(scatola*& list) {
	string input;
	cin >> input;
	if (input != "-1") {
		if (debug)cout << input << endl;
		aggiungiScatola(input, list);
		if (debug)cout << "prossimo" << endl;
		leggi(list);

	} else {
		cout << endl;
		return;
	}
}

void stampa(scatola*&list) {
	if (!list)
		cout << endl;
	else {
		cout << list->code << " " << list->value << endl;
		stampa(list->next);
	}
}

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
	pid_t pid = fork();
	if (pid < 0)
		perror("fork failed");
	if (pid == 0) {
		while (true) {
			cout << "cacca"<< endl;
			sleep(4);
		}
		exit(0);
	}
	if (debug)cout << pid;

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
}
