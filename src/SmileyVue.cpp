/*
 * SmileyVue.cpp
 *
 *  Created on: 14 nov. 2017
 *      Author: Mademoiselle
 */

#include "SmileyVue.h"

SmileyVue::SmileyVue(int x, int y) {
	this->x = x;
	this->y = y;

    visage = new CircleShape(50.f);
    visage->setFillColor(Color::Yellow);
    visage->setPosition(x + 20,y + 50);

    oeilDroit = new CircleShape(10.f);
    oeilDroit->setFillColor(Color::Green);
    oeilDroit->setPosition(x + 80,y + 70);

    oeilGauche = new CircleShape(10.f);
    oeilGauche->setFillColor(Color::Green);
    oeilGauche->setPosition(x + 40,y + 70);

    bouche = new RectangleShape(Vector2f(70, 5));
    bouche->setFillColor(Color::Red);
    bouche->setPosition(x + 35,y + 110);
}

SmileyVue::SmileyVue() {
    visage = new CircleShape(50.f);
    visage->setFillColor(Color::Yellow);
    visage->setPosition(50,50);

    oeilDroit = new CircleShape(10.f);
    oeilDroit->setFillColor(Color::Green);
    oeilDroit->setPosition(110,70);

    oeilGauche = new CircleShape(10.f);
    oeilGauche->setFillColor(Color::Green);
    oeilGauche->setPosition(70,70);

    bouche = new RectangleShape(Vector2f(70, 5));
    bouche->setFillColor(Color::Red);
    bouche->setPosition(65,110);
}

SmileyVue::~SmileyVue() {
}

void SmileyVue::afficher(RenderWindow& fenetre)
{
    fenetre.draw(*visage);
    fenetre.draw(*oeilDroit);
    fenetre.draw(*oeilGauche);
    fenetre.draw(*bouche);

}

