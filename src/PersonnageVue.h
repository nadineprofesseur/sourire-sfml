/*
 * PersonnageVue.h
 *
 *  Created on: 16 nov. 2017
 *      Author: Mademoiselle
 */

#ifndef PERSONNAGEVUE_H_
#define PERSONNAGEVUE_H_
#include <SFML/Graphics.hpp>
using namespace sf;

class PersonnageVue {
protected:
	int x;
	int y;
	Texture * texture = NULL;
	Sprite * illustration = NULL;
public:
	PersonnageVue();
	virtual ~PersonnageVue();
	void deplacer(float deplacementX, float deplacementY);
};

#endif /* PERSONNAGEVUE_H_ */
