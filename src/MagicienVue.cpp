/*
 * MagicienVue.cpp
 *
 *  Created on: 14 nov. 2017
 *      Author: Mademoiselle
 */

#include "MagicienVue.h"

MagicienVue::MagicienVue() {
	this->x = 0;
	this->y = 0;
	texture = new Texture();
	if(!texture->loadFromFile("decoration/images/magicien.png"))
		texture = NULL;
	illustration = new Sprite(*texture);
}


MagicienVue::MagicienVue(int x, int y) {
	this->x = x;
	this->y = y;
	texture = new Texture();
	if(!texture->loadFromFile("decoration/images/magicien.png"))
		texture = NULL;
	this->illustration = new Sprite(*texture);
	this->illustration->setPosition(this->x, this->y);
}

MagicienVue::~MagicienVue() {
}

void MagicienVue::afficher(RenderWindow& fenetre)
{
	fenetre.draw(*illustration);
}

void MagicienVue::deplacer(float deplacementX, float deplacementY)
{
	this->x += deplacementX;
	this->y += deplacementY;
	this->illustration->setPosition(this->x, this->y);
}

