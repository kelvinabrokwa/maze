/*
 * Cells.cpp
 *
 *  Created on: Oct 13, 2015
 *      Author: kelvinabrokwa
 */

#include "Cells.h"
int height;
int width;
int cells[10][10];
Cells::Cells() {
	//
}

Cells::~Cells() {
	// TODO Auto-generated destructor stub
}

void init() {
}

int Cells::getValueOfCell(int x, int y) {
	return cells[x][y];
}

void setTopWall(int x, int y, bool on) {};

void setBottomWall(int x, int y, bool on) {};

void setLeftWall(int x, int y, bool on) {};

void setRightWall(int x, int y, bool on) {};
