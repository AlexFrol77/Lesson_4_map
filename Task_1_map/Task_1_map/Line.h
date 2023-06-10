#pragma once
#include <iostream>
#include <vector>
#include <string>

class Line {
public:

	Line();

	virtual void printVecCoor();
	virtual int findSquare();
	virtual int findVolume();

	virtual void transShift();
	virtual void scaleX();
	virtual void scaleY();
	virtual void scale();

private:

	std::vector<std::pair<std::string, int>> vecCoorX = {
		{"X1", 1}, {"X2", 1}
	};
	std::vector<std::pair<std::string, int>> vecCoorY = {
		{"Y1", 1}, {"Y2", 1}
	};
	int square_ = 0,
		volume_ = 0;
};
