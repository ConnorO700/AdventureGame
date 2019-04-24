#include "tile.hpp"
#include <string>
class hero : public tile {
public:
  hero(sf::Vector2f size, int x, int y, sf::Color c, std::string s);
  
private:
  std::string heroType;
  int hp;
  int damage;
  int mana;
};
