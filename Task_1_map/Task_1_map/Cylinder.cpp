#include "Cylinder.h"

Cylinder::Cylinder() {
	std::cout << "¬ведите координаты цилиндра X: " << std::endl;
	std::cin >> x_;
	std::cout << "¬ведите координаты цилиндра Y: " << std::endl;
	std::cin >> y_;
	std::cout << "¬ведите радиус цилиндра " << std::endl;
	std::cin >> R_;
	std::cout << "¬ведите высоту цилиндра: " << std::endl;
	std::cin >> H_;
}
void Cylinder::printVecCoor() {
	std::cout << "X: = " << x_ << std::endl;
	std::cout << "Y: = " << y_ << std::endl;
	std::cout << "R: = " << R_ << std::endl;
	std::cout << "H: = " << H_ << std::endl;
}
int Cylinder::findSquare() {
	square_ = M_PI * R_ * R_ + 2 * R_ * H_;
	return square_;
}
int Cylinder::findVolume() {
	volume_ = M_PI * R_ * R_ * H_;
	return volume_;
}