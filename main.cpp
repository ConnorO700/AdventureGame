#include "room.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
int main(){
  int windowSize = 800;
  int y = 12;
  int x = 12; 
  room r(x, y);
  sf::Vector2f tz(50,50);
  bool up    = true;
  bool down  = true;
  bool left  = true;
  bool right = true;

  std::string userInput; 
  std::cout << "Enter class name: "; 
  std::cin >> userInput; 

  hero h(tz, 5,0, sf::Color::Blue, userInput);
  
  sf::RenderWindow window(sf::VideoMode(windowSize,windowSize), "Map");
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }
    window.clear();
    int hx = h.get_x();
    int hy = h.get_y();
    if((left)&&(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))){
      std::cout << "left" <<std::endl;
      if(0 <= hx - 1){
        h.set_x(hx - 1);
      }
      left = false;
    }
    if((right)&&(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))){
      std::cout << "right" <<std::endl;
      if(r.get_x()-1 >= hx + 1){
        h.set_x(hx + 1);
      }
      right = false;
    }
    if((up)&&(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))){
      std::cout << "up" <<std::endl;
      if(0 <= hy -1){
        h.set_y(hy - 1);
      }
      up = false;
    }
    if((down)&&(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))){
      std::cout << "down" <<std::endl;
      if(r.get_y()-1 >= hy + 1){
        h.set_y(hy + 1);
      }
      down = false;
    }

    if(event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Left){
      left = true;
    }
    if(event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Right){
      right = true;
    }
    if(event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Up){
      up = true;
    }
    if(event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Down){
      down = true;
    }

    
    for(int i = 0; i < y; i++){
      for(int j = 0; j < x; j++){
        window.draw(r.get_t(j,i));
      }
    }
    window.draw(h);
    window.display();
  }

}
