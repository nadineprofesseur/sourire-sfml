#include <SFML/Graphics.hpp>
#include "SmileyVue.h"
#include "MagicienVue.h"
#include "GuerrierVue.h"
#include <string>
#include <iostream>
#include <vector>
using namespace sf;
using namespace std;
int main()
{
    RenderWindow fenetre(VideoMode(800, 600), "SFML !");

    MagicienVue* magicienVue = new MagicienVue(400,400);
    GuerrierVue* guerrierVue = new GuerrierVue(200,200);
    vector<PersonnageVue*> listePersonnages;
    listePersonnages.push_back(magicienVue);
    listePersonnages.push_back(guerrierVue);


    // https://apod.nasa.gov/apod/ap171114.html
    string cheminImageEspace = "decoration/images/DeepPleiadesPanstarrs.jpg";
    Texture ambianceEspace;
    Sprite * scene = NULL;
    if(ambianceEspace.loadFromFile(cheminImageEspace))
    {
    	scene = new Sprite(ambianceEspace);
    }

    float pas = 10;

    while (fenetre.isOpen())
    {
        Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre.close();


            if(evenement.type == Event::KeyPressed)
            {
            	switch(evenement.key.code)
            	{
            		case Keyboard::A:
            			cout << "Touche A" << endl;
            		break;
            		case Keyboard::Left:
            			magicienVue->deplacer(-pas, 0);
               		break;
            		case Keyboard::Right:
            			magicienVue->deplacer(pas, 0);
                   	break;
            		case Keyboard::Up:
            			magicienVue->deplacer(0, -pas);
                   	break;
            		case Keyboard::Down:
            			magicienVue->deplacer(0, pas);
                  	break;
            		case Keyboard::B:
            			guerrierVue->activerBouclier();
            		break;
            		case Keyboard::N :
            			guerrierVue->desactiverBouclier();
           			break;

            	}
            }
        }
        fenetre.clear();
        if(scene) fenetre.draw(*scene);

        vector<PersonnageVue*>::iterator visiteurPersonnages = listePersonnages.begin();
        while(visiteurPersonnages != listePersonnages.end())
        {
        	(*visiteurPersonnages)->afficher(fenetre);
        	// pas opérateur * des pointeurs, c'est la surcharge de celui-ci dans iterator()
        	// (*visiteurPersonnages) donne un pointeur PersonnageVue*
        	visiteurPersonnages++;
        }

        fenetre.display();
    }
    return 0;
}


