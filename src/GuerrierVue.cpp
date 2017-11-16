/*
 * GuerrierVue.cpp
 *
 *  Created on: 16 nov. 2017
 *      Author: Mademoiselle
 */

#include "GuerrierVue.h"

GuerrierVue::GuerrierVue() {
	this->x = 0;
	this->y = 0;
	texture = new Texture();
	if(!texture->loadFromFile("decoration/images/magicien.png"))
		texture = NULL;
	this->illustration = new Sprite(*texture);
	this->illustration->setPosition(this->x, this->y);
}

GuerrierVue::GuerrierVue(int x, int y)
{
	this->x = x;
	this->y = y;
	texture = new Texture();
	if(!texture->loadFromFile("decoration/images/magicien.png"))
		texture = NULL;
	this->illustration = new Sprite(*texture);
	this->illustration->setPosition(this->x, this->y);
}

GuerrierVue::~GuerrierVue() {
}


