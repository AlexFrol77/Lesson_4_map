#include "Circle.h"

Circle::Circle() {
	std::cout << "¬ведите координаты круга X: " << std::endl;
	std::cin >> x_;
	std::cout << "¬ведите координаты круга Y: " << std::endl;
	std::cin >> y_;
	std::cout << "¬ведите радиус круга: " << std::endl;
	std::cin >> R_;
}
void Circle::printVecCoor() {
	std::cout << "X: = " << x_ << std::endl;
	std::cout << "Y: = " << y_ << std::endl;
	std::cout << "R: = " << R_ << std::endl;
}
int Circle::findSquare() {
	square_ = M_PI * R_ * R_;
	return square_;
}
int Circle::findVolume() {
	volume_ = 0;
	return volume_;
}