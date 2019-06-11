/*
 * data.h
 *
 *  Created on: 11 giu 2019
 *      Author: alessandro
 */

#ifndef DATA_H_
#define DATA_H_

#include <iostream>

struct scatola {
	std::string code;
	int value;
	scatola* next;
	scatola(std::string a = 0, int b = 1, scatola* c = 0) {
		code = a;
		value = b;
		next = c;
	}
};

scatola* cercaById(std::string, scatola*);
void aggiungiScatola(std::string, scatola*&);
void deleteRecord(scatola*&, std::string);
void cancellaScatola(scatola*&, std::string);

#endif /* DATA_H_ */
