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
	if(!texture->loadFromFile("decoration/images/guerrier.png"))
		texture = NULL;
	this->illustration = new Sprite(*texture);
	this->illustration->setPosition(this->x, this->y);
	if(!textureBouclier->loadFromFile("decoration/images/bouclier-bleu.png"))
		textureBouclier = NULL;
	this->illustrationBouclier = new Sprite(*textureBouclier);
	this->illustrationBouclier->setPosition(this->x+50, this->y-20);
}

GuerrierVue::GuerrierVue(int x, int y)
{
	this->x = x;
	this->y = y;
	texture = new Texture();
	if(!texture->loadFromFile("decoration/images/guerrier.png"))
		texture = NULL;
	this->illustration = new Sprite(*texture);
	this->illustration->setPosition(this->x, this->y);
	textureBouclier = new Texture();

	if(!textureBouclier->loadFromFile("decoration/images/bouclier-bleu.png"))
		textureBouclier = NULL;
	this->illustrationBouclier = new Sprite(*textureBouclier);
	this->illustrationBouclier->setPosition(this->x+50, this->y-20);
}

GuerrierVue::~GuerrierVue() {
}

void GuerrierVue::afficher(RenderWindow& fenetre)
{
	fenetre.draw(*illustration);
	fenetre.draw(*illustrationBouclier);
}

void GuerrierVue::activerBouclier()
{
	this->bouclierActif = true;
	if(!textureBouclier->loadFromFile("decoration/images/bouclier-rouge.png"))
		textureBouclier = NULL;
	this->illustrationBouclier = new Sprite(*textureBouclier);
	this->illustrationBouclier->setPosition(this->x+50, this->y-20);
}
void GuerrierVue::desactiverBouclier()
{
	this->bouclierActif = false;
	if(!textureBouclier->loadFromFile("decoration/images/bouclier-bleu.png"))
		textureBouclier = NULL;
	this->illustrationBouclier = new Sprite(*textureBouclier);
	this->illustrationBouclier->setPosition(this->x+50, this->y-20);

}


