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

	Texture * texture = NULL;
	Sprite * illustration = NULL;
public:
	MagicienVue();
	virtual ~MagicienVue();
};

#endif /* MAGICIENVUE_H_ */
