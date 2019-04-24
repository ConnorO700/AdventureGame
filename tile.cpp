#include "tile.hpp"
//################## CONSTRUCTOR
//	@param Vector2f size - draw size of tile
//	@param int x, y - tile coordinates
//	@param sf:Color c - color of tile
//##################
tile::tile(){
  xPos = -1;
  yPos = -1;
  square.setFillColor(sf::Color::Red);
  square.setPosition(0,0);
  square.setSize(sf::Vector2f(10,10));
}
tile::tile(sf::Vector2f size, int x, int y, sf::Color c){
  xPos = x;
  yPos = y;
  myColor = c;
  square.setFillColor(c); 
  square.setPosition(x*65+15, y*65+15); 
  square.setSize(size); 
  
}
//##################
//	@param RenderTarget - draws a class variable sf::RectangleShape
//##################
void tile::draw(sf::RenderTarget& target, sf::RenderStates states) const {
  target.draw(square);

}
void tile::operator=(const tile &right){
  xPos = right.xPos;
  yPos = right.yPos;
  myColor = right.myColor;
  square = right.square;
  
}


void tile::set_x(int imp){
  xPos=imp; 
  square.setPosition(imp*65+15,yPos*65+15);
}
void tile::set_y(int imp){
  yPos=imp; 
  square.setPosition(xPos*65+15,imp*65+15);
}

