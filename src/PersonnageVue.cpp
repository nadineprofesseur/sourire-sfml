/*
 * PersonnageVue.cpp
 *
 *  Created on: 16 nov. 2017
 *      Author: Mademoiselle
 */

#include "PersonnageVue.h"


PersonnageVue::PersonnageVue() {
}

PersonnageVue::~PersonnageVue() {
}

void PersonnageVue::deplacer(float deplacementX, float deplacementY)
{
	this->x += deplacementX;
	this->y += deplacementY;
	this->illustration->setPosition(this->x, this->y);
}

void PersonnageVue::afficher(RenderWindow& fenetre)
{
	fenetre.draw(*illustration);
}
