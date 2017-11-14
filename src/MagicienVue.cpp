/*
 * MagicienVue.cpp
 *
 *  Created on: 14 nov. 2017
 *      Author: Mademoiselle
 */

#include "MagicienVue.h"


MagicienVue::MagicienVue() {
	texture = new Texture();
	if(!texture->loadFromFile("decoration/images/magicien.png"))
		texture = NULL;
	illustration = new Sprite(*texture);
}

MagicienVue::~MagicienVue() {
}
