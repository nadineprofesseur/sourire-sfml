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
	Sprite * illustrationBouclierRouge = NULL;
	Sprite * illustrationBouclierBleu = NULL;
	bool bouclierActif = false;
public:
	GuerrierVue(int x, int y);
	GuerrierVue();
	virtual ~GuerrierVue();
	void afficher(RenderWindow& fenetre);
	void activerBouclier();
	void desactiverBouclier();
};

#endif /* GUERRIERVUE_H_ */
