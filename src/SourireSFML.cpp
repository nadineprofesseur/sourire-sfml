#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    RenderWindow fenetre(VideoMode(1000, 1000), "SFML !");

    CircleShape visage(50.f);
    visage.setFillColor(Color::Yellow);
    visage.setPosition(50,50);

    CircleShape oeilDroit(10.f);
    oeilDroit.setFillColor(Color::Green);
    oeilDroit.setPosition(110,70);

    CircleShape oeilGauche(10.f);
    oeilGauche.setFillColor(Color::Green);
    oeilGauche.setPosition(70,70);

    RectangleShape bouche(Vector2f(70, 5));
    bouche.setFillColor(Color::Red);
    bouche.setPosition(65,110);

    while (fenetre.isOpen())
    {
        sf::Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == sf::Event::Closed)
                fenetre.close();
        }
        fenetre.clear();
        fenetre.draw(visage);
        fenetre.draw(oeilDroit);
        fenetre.draw(oeilGauche);
        fenetre.draw(bouche);
        fenetre.display();
    }
    return 0;
}


