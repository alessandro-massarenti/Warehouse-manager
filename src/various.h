/*
 * misc.h
 *
 *  Created on: Jun 21, 2019
 *      Author: amassare
 */

#ifndef VARIOUS_H_
#define VARIOUS_H_

#include "boxData.h"

class myswap {
public:
	scatola*& ptr;

	myswap(scatola*& p) :
			ptr(p) {
	}
};

struct attention{
	scatola* box_ptr;
	int type;
	attention* next;
	attention(scatola* a = 0, int b = 0, attention* c = 0){
		box_ptr = a;
		type = b;
		next = c;
	}
};

void leggi(scatola*&);
void stampa(scatola*);

#endif /* VARIOUS_H_ */
