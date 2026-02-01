#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Car Racing Game");

    sf::RectangleShape car(sf::Vector2f(50, 100)); // width, height
car.setFillColor(sf::Color::Red);
car.setPosition(375, 450); // near bottom center

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        float speed = 5.0f;

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    car.move(-speed, 0);

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    car.move(speed, 0);

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
    car.move(0, -speed);

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
    car.move(0, speed);


       window.clear(sf::Color::Black);
window.draw(car);
window.display();

    }

    return 0;
}
