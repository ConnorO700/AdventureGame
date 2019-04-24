#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include "tile.hpp"
#include "hero.hpp"
class tile;
class hero;
class stuff; 

class room{
public:
  room(int x, int y);
  room(int x, int y, tile t);
  tile get_t(int x, int y);
  int get_x(){return width;};
  int get_y(){return length;};
  void push_back(tile imp);
  void add(tile t);
  void replace(int x, int y,tile t);
private:
  int width;
  int length;
  std::vector<tile> deck;
  
};



