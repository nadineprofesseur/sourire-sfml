#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    RenderWindow fenetre(VideoMode(1000, 1000), "SFML !");
    CircleShape visage(50.f);
    visage.setFillColor(Color::Yellow);
    visage.setPosition(50,50);
    while (fenetre.isOpen())
    {
        Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre.close();
        }
        fenetre.clear();
        fenetre.draw(visage);
        fenetre.display();
    }
    return 0;
}


