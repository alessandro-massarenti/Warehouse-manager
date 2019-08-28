/*
 * data.h
 *
 *  Created on: 11 giu 2019
 *      Author: alessandro
 */

#ifndef BOXDATA_H_
#define BOXDATA_H_

#include <iostream>

struct scatola {
	std::string code;
	int value;
	int low_warn;
	scatola* next;
	scatola(std::string a = 0, int b = 1, int c = 2, scatola* d = 0) {
		code = a;
		value = b;
		low_warn = c;
		next = d;
	}
};

scatola* cercaById(std::string, scatola*);
void aggiungiScatola(std::string, scatola*&);
void deleteRecord(scatola*&, std::string);
void cancellaScatola(scatola*&, std::string);
void leggi(scatola*&);
void stampa(scatola*);

#endif /* BOXDATA_H_ */
