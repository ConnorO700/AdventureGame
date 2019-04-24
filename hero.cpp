#include <string>
#include "hero.hpp"
#include <iostream>
hero::hero(sf::Vector2f size, int x, int y, sf::Color c, std::string s) : tile(size, x, y, c){
  if (s == "warrior"){
    set_c(sf::Color::Red);
    heroType = s;
    hp = 30;
    damage = 4;
    mana = 2;
  }
  else if (s == "archer"){
    set_c(sf::Color::Green);
    heroType = s;
    hp = 10;
    damage = 6;
    mana = 4;
  }
  else if (s == "mage"){
    set_c(sf::Color::Blue);
    heroType = s;
    hp = 20;
    damage = 2;
    mana = 6;
  }
  else{
    set_c(sf::Color::Magenta);
    heroType = s;
    hp = 20;
    damage = 4;
    mana = 4;
  }
}


