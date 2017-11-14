#include <SFML/Graphics.hpp>
#include "SmileyVue.h"
#include <string>
using namespace sf;
using namespace std;
int main()
{
    RenderWindow fenetre(VideoMode(1000, 1000), "SFML !");

    SmileyVue smileyVue(500,500);

    // https://apod.nasa.gov/apod/ap171114.html
    string cheminImageEspace = "C:\\DeepPleiadesPanstarrs.jpg";
    Texture ambianceEspace;
    ambianceEspace.loadFromFile(cheminImageEspace);

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


