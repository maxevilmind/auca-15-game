NAME = game15
CXXFLAGS += -std=c++11
SFMLLIBS = -lsfml-graphics -lsfml-window -lsfml-system
OBJFILES = main.o Random.o Piece.o Game.o Drawer.o

$(NAME).exe: $(OBJFILES)
	g++ -o $(NAME).exe $(OBJFILES) -s $(SFMLLIBS)

main.o: main.cpp
	g++ $(CXXFLAGS) $(SFMLLIBS) -c main.cpp

Random.o: Random.cpp Random.h
	g++ $(CXXFLAGS) $(SFMLLIBS) -c Random.cpp
	
Piece.o: Piece.cpp Piece.h
	g++ $(CXXFLAGS) $(SFMLLIBS) -c Piece.cpp
	
Game.o: Game.cpp Game.h
	g++ $(CXXFLAGS) $(SFMLLIBS) -c Game.cpp

Drawer.o: Drawer.cpp Drawer.h
	g++ $(CXXFLAGS) $(SFMLLIBS) -c Drawer.cpp