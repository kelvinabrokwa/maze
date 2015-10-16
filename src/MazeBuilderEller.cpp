/*
 * MazeBuilderEller.cpp
 *
 *  Created on: Oct 16, 2015
 *      Author: kelvinabrokwa
 */

#include "MazeBuilderEller.h"

MazeBuilderEller::MazeBuilderEller() {}

MazeBuilderEller::~MazeBuilderEller() {}


Cells MazeBuilderEller::generateMaze() {
	for (int x = 0; x < width; x++) sets[x][0] = x + 1;
	for (int y = 0; y < height; y++) {
		populateNext(y);
	}
	return cells;
}


/**
 * randomly join adjacent sets of a given row
 */
void MazeBuilderEller::joinSets(int row) {}
/**
 * wrapper around `setWall` methods
 */
void MazeBuilderEller::breakWallHorizontal(int row) {}
/**
 * populate the row after the one at index `row`
 */
void MazeBuilderEller::populateNext(int row) {
	// TO DO
	if (row != height - 2) joinSets(row + 1);
	else joinLastRow();
}
/**
 * join all adjacent disjoint sets in the last row
 */
void MazeBuilderEller::joinLastRow() {}
