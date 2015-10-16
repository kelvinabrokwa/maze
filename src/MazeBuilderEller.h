/*
 * MazeBuilderEller.h
 *
 *  Created on: Oct 16, 2015
 *      Author: kelvinabrokwa
 */

#ifndef MAZEBUILDERELLER_H_
#define MAZEBUILDERELLER_H_

#include "Cells.h"

class MazeBuilderEller {
public:
	MazeBuilderEller();
	virtual ~MazeBuilderEller();
	Cells generateMaze();
private:
	void joinSets(int row);
	void breakWallHorizontal(int row);
	void populateNext(int row);
	void joinLastRow();
};

#endif /* MAZEBUILDERELLER_H_ */
