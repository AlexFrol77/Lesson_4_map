#pragma once
#include "Line.h"
#include <iostream>
#include <vector>
#include <string>

class Square : public Line  {
public:

	Square();

	void printVecCoor() override;
	int findSquare() override;
	int findVolume() override;

	void transShift() override;
	void scaleX() override;
	void scaleY() override;
	void scale() override;

private:
	std::vector<std::pair<std::string, int>> vecCoorX = {
		{"X1", 1}, {"X2", 1}, {"X3", 1}, {"X4", 1}
	};
	std::vector<std::pair<std::string, int>> vecCoorY = {
		{"Y1", 1}, {"Y2", 1}, {"Y3", 1}, {"Y4", 1}
	};
	int square_ = 0,
		volume_ = 0,
		a = 0,
		b = 0;
};
