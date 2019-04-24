#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
class tile : public sf::Drawable{
public:
  tile();
  tile(sf::Vector2f size, int x, int y, sf::Color);
  void set_x(int imp);
  void set_y(int imp);
  void set_c(sf::Color imp){square.setFillColor(imp); myColor=imp;};
  int get_x(){return xPos;};
  int get_y(){return yPos;};
  sf::Color get_c(){return myColor;};
  void draw(sf::RenderTarget& target, sf::RenderStates states) const;
  void operator=(const tile &right);
private:
  sf::RectangleShape square; 
  int xPos;
  int yPos;
  sf::Color myColor;
};
