#pragma once
#include <iostream>
#include <vector>
#include <string>

class Circle {
public:

	Circle();

	virtual void printVecCoor();
	virtual int findSquare();
	virtual int findVolume();

private:
	int x_ = 0,
		y_ = 0;
	double square_ = 0,
		   volume_ = 0,
	       R_ = 0,
		   M_PI = 3.14;
};

