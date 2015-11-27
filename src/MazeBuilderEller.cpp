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
	srand(time(NULL));
	for (int x = 0; x < width; x++) sets[0][x] = x + 1;
	for (int y = 0; y < height; y++) {
		populateNext(y);
	}
	return cells;
}

/**
 * randomly join adjacent sets of a given row
 */
void MazeBuilderEller::joinSets(int row) {
	for (int cell = 0; cell < width - 1; cell++) {
		if (randomBool()) {
			breakWallHorizontal(row, cell);
		}
	}
}
/**
 * wrapper around `setWall` methods
 */
void MazeBuilderEller::breakWallHorizontal(int row, int cell) {
	/*
	if (sets[row][cell] == sets[row][cell + 1]) return;
	int oldSet, newSet;
	if (sets[row][cell] < sets[row][cell + 1]) {
		oldSet = sets[row][cell + 1];
		newSet = sets[row][cell];
		sets[row][cell + 1] = sets[row][cell];
	} else {
		oldSet = sets[row][cell];
		newSet = sets[row][cell + 1];
		sets[row][cell] = sets[row][cell + 1];
	}
	for (int i = 0; i < width; i++) {
		if (sets[row][i] == oldSet) sets[row][i] = newSet;
	}
	*/
	cells.setRightWall(row, cell, false);
}
/**
 * populate the row after the one at index `row`
 */
void MazeBuilderEller::populateNext(int row) {
	//int nextIdx = row + 1;
	//int currRow = cells[row];
	//int nextRow = cells[nextIdx];
	//std::unordered_map<int, int>hmap;
	if (row != height - 1) joinSets(row + 1);
	else joinLastRow();
}
/**
 * join all adjacent disjoint sets in the last row
 */
void MazeBuilderEller::joinLastRow() {
	int row = height - 1;
	for (int cell = 0; cell < width - 1; cell++) {
		if (sets[row][cell] != sets[row][cell + 1]) {
			cells.setRightWall(row, cell, false);
		}
	}
}

/**
 * helper methods
 */
bool MazeBuilderEller::randomBool() {
	return rand() % 2 == 1;
}

/**
 * debugger methods
 */
void MazeBuilderEller::printSets() {
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			if (x < width - 1) cout << sets[y][x] << " ";
			else cout << sets[y][x] << endl;
		}
	}
}
