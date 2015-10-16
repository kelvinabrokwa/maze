//============================================================================
// Name        : maze.cpp
// Author      : Kelvin Abrokwa-Johnson
// Version     : 0.0.1
// Copyright   : TO DO
// Description : Maze video game
//============================================================================

#include <iostream>
#include "Cells.h"
#include "MazeBuilderEller.h"
using namespace std;

int main() {
	Cells c;
	MazeBuilderEller m;
	c = m.generateMaze();
	c.printCells();
	return 0;
}
