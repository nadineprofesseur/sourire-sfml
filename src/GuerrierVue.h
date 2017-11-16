/*
 * GuerrierVue.h
 *
 *  Created on: 16 nov. 2017
 *      Author: Mademoiselle
 */

#ifndef GUERRIERVUE_H_
#define GUERRIERVUE_H_

#include "PersonnageVue.h"

class GuerrierVue: public PersonnageVue {

protected:
	Texture * textureBouclier = NULL;
	Sprite * illustrationBouclier = NULL;
public:
	GuerrierVue(int x, int y);
	GuerrierVue();
	virtual ~GuerrierVue();
	void afficher(RenderWindow& fenetre);
};

#endif /* GUERRIERVUE_H_ */
