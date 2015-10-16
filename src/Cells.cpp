/*
 * Cells.cpp
 *
 *  Created on: Oct 13, 2015
 *      Author: kelvinabrokwa
 */

#include "Cells.h"

Cells::Cells() {
	for (int x = 0; x < width; x++) {
		for (int y = 0; y < height; y++) {
			cells[x][y] = WALL_ALL;
		}
	}
}

Cells::~Cells() {}

int Cells::getValueOfCell(int x, int y) {
	return cells[x][y];
}

// also takes care of its neighbors wall
void Cells::setTopWall(int x, int y, bool on) {
	if (on)
		cells[x][y] |= WALL_TOP;
	else
		cells[x][y] &= ~WALL_TOP;
};

void Cells::setBottomWall(int x, int y, bool on) {
	if (on)
		cells[x][y] |= WALL_BOTTOM;
	else
		cells[x][y] &= ~WALL_BOTTOM;
};

void Cells::setLeftWall(int x, int y, bool on) {
	if (on)
		cells[x][y] |= WALL_RIGHT;
	else
		cells[x][y] &= ~WALL_RIGHT;
};

void Cells::setRightWall(int x, int y, bool on) {
	if (on)
		cells[x][y] |= WALL_RIGHT;
	else
		cells[x][y] &= ~WALL_RIGHT;
};

void Cells::printCells() {
	for (int y = 0; y < height; y++) {
		for (int x = 0; x < width; x++) {
			if (x < width - 1) cout << cells[x][y] << " ";
			else cout << cells[x][y] << endl;
		}
	}
}

void Cells::writeCellsToDisk() {}
