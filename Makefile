all: room.o tile.o hero.o main.o
	g++ main.o room.o tile.o hero.o -o WAM -lsfml-graphics -lsfml-window -lsfml-system


room.o: room.cpp room.hpp
	g++ -c room.cpp -Werror -Wall -ansi -pedantic 

tile.o: tile.cpp tile.hpp
	g++ -c tile.cpp -Werror -Wall -ansi -pedantic 

hero.o: hero.cpp hero.hpp
	g++ -c hero.cpp -Werror -Wall -ansi -pedantic 

main.o: main.cpp
	g++ -c main.cpp -Wall -ansi -pedantic

clean:
	rm *.o WAM
