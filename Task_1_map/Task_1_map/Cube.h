#pragma once
#include "Line.h"

class Cube : public Line {
public:

	Cube();

	void printVecCoor() override;
	int findSquare() override;
	int findVolume() override;

	void transShift() override;
	void scaleX() override;
	void scaleY() override;
	void scaleZ();
	void scale() override;


private:
	std::vector<std::pair<std::string, int>> vecCoorX = {
		{"X1", 1}, {"X2", 1}, {"X3", 1}, {"X4", 1},
		{"X5", 1}, {"X6", 1}, {"X7", 1}, {"X8", 1}
	};
	std::vector<std::pair<std::string, int>> vecCoorY = {
		{"Y1", 1}, {"Y2", 1}, {"Y3", 1}, {"Y4", 1},
		{"Y5", 1}, {"Y6", 1}, {"Y7", 1}, {"Y8", 1}
	};
	std::vector<std::pair<std::string, int>> vecCoorZ = {
		{"Z1", 1}, {"Z2", 1}, {"Z3", 1}, {"Z4", 1},
		{"Z5", 1}, {"Z6", 1}, {"Z7", 1}, {"Z8", 1}
	};
	int square_ = 0,
		volume_ = 0,
		a = 0,
		b = 0,
		c = 0;
};
