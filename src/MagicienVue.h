/*
 * MagicienVue.h
 *
 *  Created on: 14 nov. 2017
 *      Author: Mademoiselle
 */

#ifndef MAGICIENVUE_H_
#define MAGICIENVUE_H_
#include <SFML/Graphics.hpp>
using namespace sf;

class MagicienVue {

protected:
	int x;
	int y;
	Texture * texture = NULL;
	Sprite * illustration = NULL;
public:
	MagicienVue(int x, int y);
	MagicienVue();
	virtual ~MagicienVue();
	void afficher(RenderWindow& fenetre);
};

#endif /* MAGICIENVUE_H_ */
