#include <SFML/Graphics.hpp>
using namespace sf;
int main()
{
    RenderWindow fenetre(VideoMode(1000, 1000), "SFML !");
    CircleShape cercle(50.f);
    while (fenetre.isOpen())
    {
        Event evenement;
        while (fenetre.pollEvent(evenement))
        {
            if (evenement.type == Event::Closed)
                fenetre.close();
        }
        fenetre.clear();
        fenetre.draw(cercle);
        fenetre.display();
    }
    return 0;
}


