# Define variables at the top
CXX = g++
CXXFLAGS = -std=c++11 -g
LIBS = -l ncurses
 
run: maze
	./maze
	rm -f *.o

maze: drawMaze.o maze.o
	$(CXX) drawMaze.o maze.o -o maze $(LIBS)

maze.o: maze.cpp drawMaze.h
	$(CXX) -c maze.cpp $(CXXFLAGS)

drawMaze.o: drawMaze.cpp drawMaze.h
	$(CXX) -c drawMaze.cpp $(CXXFLAGS)
 