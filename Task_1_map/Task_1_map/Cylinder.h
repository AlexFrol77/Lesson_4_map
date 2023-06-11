#pragma once
#include "Circle.h"

class Cylinder : public Circle {
public:

	Cylinder();

	void printVecCoor() override;
	int findSquare() override;
	int findVolume() override;

private:
	int x_ = 0,
		y_ = 0,
		square_ = 0,
		volume_ = 0;
	double R_ = 0,
		   H_ = 0,
		M_PI = 3.14;
};


