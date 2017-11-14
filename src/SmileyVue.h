/*
 * SmileyVue.h
 *
 *  Created on: 14 nov. 2017
 *      Author: Mademoiselle
 */
#include <SFML/Graphics.hpp>
using namespace sf;

#ifndef SMILEYVUE_H_
#define SMILEYVUE_H_

class SmileyVue {
protected:
    CircleShape* visage;
    CircleShape* oeilDroit;
    CircleShape* oeilGauche;
    RectangleShape* bouche;
public:
	SmileyVue();
	virtual ~SmileyVue();
	void afficher(RenderWindow& fenetre);
};

#endif /* SMILEYVUE_H_ */
