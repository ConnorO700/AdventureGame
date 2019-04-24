#include "room.hpp"
//################## CONSTRUCTOR
//	@param int x, y - max room dimensions
//##################
room::room(int x, int y){
  width = x;
  length = y;
  int tileSize = 50;
  sf::Vector2f tz(tileSize,tileSize);
  for(int i = 0; i < y; i++){
    for(int j = 0; j < x; j++){
      tile t(tz, j, i, sf::Color::White);
      deck.push_back(t);

    }
  }
}
//################## CONSTRUCTOR
//	@param int x, y - max room dimensions
//	@param tile t - starter tile       //pending change to starter deck
//##################
room::room(int x, int y, tile t){
  width = x;
  length = y;
  deck.push_back(t);
  
}
//##################
//	@param int x, y - coordinates of specific tile in matrix
//	@return tile - specific tile in room
//##################
tile room::get_t(int x, int y){
  return deck.at(y*width+x);
}
//##################
//	@param tile t - new tile to add to room
//##################
void room::add(tile t){
  deck.push_back(t);
}
//##################
//	@param int x, y - coordinates of existing tile
//	@param tile t - new tile to replace existing tile
//##################
void room::replace(int x, int y, tile t){
  deck.at(y*width+x) = t; 
}

