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
	Texture * textureBouclierRouge = new Texture();
	Texture * textureBouclierBleu = new Texture();
	if(!textureBouclierRouge->loadFromFile("decoration/images/bouclier-rouge.png")) textureBouclierRouge = NULL;
	if(!textureBouclierBleu->loadFromFile("decoration/images/bouclier-bleu.png")) textureBouclierBleu = NULL;
	this->illustrationBouclierRouge = new Sprite(*textureBouclierRouge);
	this->illustrationBouclierRouge->setPosition(this->x+50, this->y-20);
	this->illustrationBouclierBleu = new Sprite(*textureBouclierBleu);
	this->illustrationBouclierBleu->setPosition(this->x+50, this->y-20);
}

GuerrierVue::~GuerrierVue() {
	delete this->illustration;
	delete this->texture;
	delete this->illustrationBouclierBleu->getTexture();
	delete this->illustrationBouclierBleu;
	delete this->illustrationBouclierRouge->getTexture();
	delete this->illustrationBouclierRouge;

}

void GuerrierVue::afficher(RenderWindow& fenetre)
{
	fenetre.draw(*illustration);
	fenetre.draw((this->bouclierActif)?(*illustrationBouclierRouge):(*illustrationBouclierBleu)); // ternaire
}

void GuerrierVue::activerBouclier()
{
	this->bouclierActif = true;
}
void GuerrierVue::desactiverBouclier()
{
	this->bouclierActif = false;
}


