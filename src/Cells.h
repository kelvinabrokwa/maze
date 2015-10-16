/*
 * Cells.h
 *
 *  Created on: Oct 13, 2015
 *      Author: kelvinabrokwa
 */

#ifndef CELLS_H_
#define CELLS_H_

class Cells {
public:
	Cells();
	virtual ~Cells();
	int getValueOfCell(int x, int y);
	void init();
	void setTopWall(int x, int y, bool on);
	void setBottomWall(int x, int y, bool on);
	void setLeftWall(int x, int y, bool on);
	void setRightWall(int x, int y, bool on);

};

#endif /* CELLS_H_ */
