#include <SFML/Graphics.hpp>
#include "SmileyVue.h"
using namespace sf;
int main()
{
    RenderWindow fenetre(VideoMode(1000, 1000), "SFML !");

    SmileyVue smileyVue;

    while (fenetre.isOpen())
    {
        sf::Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == sf::Event::Closed)
                fenetre.close();
        }
        fenetre.clear();
        smileyVue.afficher(fenetre);
        fenetre.display();
    }
    return 0;
}


