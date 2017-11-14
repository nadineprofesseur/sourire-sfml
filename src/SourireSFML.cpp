#include <SFML/Graphics.hpp>
#include "SmileyVue.h"
#include "MagicienVue.h"
#include <string>
using namespace sf;
using namespace std;
int main()
{
    RenderWindow fenetre(VideoMode(800, 600), "SFML !");

    SmileyVue smileyVue(300,200);
    MagicienVue magicienVue;


    // https://apod.nasa.gov/apod/ap171114.html
    string cheminImageEspace = "decoration/images/DeepPleiadesPanstarrs.jpg";
    Texture ambianceEspace;
    ambianceEspace.loadFromFile(cheminImageEspace);
    Sprite * scene = NULL;
    if(ambianceEspace.loadFromFile(cheminImageEspace))
    {
    	scene = new Sprite(ambianceEspace);
    }

    while (fenetre.isOpen())
    {
        sf::Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == sf::Event::Closed)
                fenetre.close();
        }
        fenetre.clear();
        if(scene) fenetre.draw(*scene);
        smileyVue.afficher(fenetre);
        magicienVue.afficher(fenetre);
        fenetre.display();
    }
    return 0;
}


