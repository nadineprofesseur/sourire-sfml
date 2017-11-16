/*
 * MagicienVue.h
 *
 *  Created on: 14 nov. 2017
 *      Author: Mademoiselle
 */

#ifndef MAGICIENVUE_H_
#define MAGICIENVUE_H_
#include "PersonnageVue.h"
using namespace sf;

class MagicienVue : public PersonnageVue
{
protected:

public:
	MagicienVue(int x, int y);
	MagicienVue();
	virtual ~MagicienVue();
};

#endif /* MAGICIENVUE_H_ */
