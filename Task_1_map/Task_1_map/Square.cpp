#include "Square.h"

Square::Square() {
	std::cout << "¬ведите координаты площади: " << std::endl;
	for (int i = 0; i < vecCoorY.size(); i++) {
		std::cout << vecCoorX[i].first << " = ";
		std::cin >> vecCoorX[i].second;
		std::cout << vecCoorY[i].first << " = ";
		std::cin >> vecCoorY[i].second;
	}
	a = abs(vecCoorX[0].second - vecCoorX[1].second);
	b = abs(vecCoorY[0].second - vecCoorY[1].second);
}
void Square::printVecCoor() {
	for (int i = 0; i < vecCoorY.size(); i++) {
		std::cout << vecCoorX[i].first << " = " << vecCoorX[i].second << std::endl;
		std::cout << vecCoorY[i].first << " = " << vecCoorY[i].second << std::endl;
	}
}
int Square::findSquare() {
	square_ = a * b;
	return square_;
}
int Square::findVolume() {
	volume_ = 0;
	return volume_;
}
void Square::transShift() {
	int temp_X = 0,
		temp_Y = 0;
	std::cout << "¬ведите новые координаты площади : " << std::endl;
	std::cout << "X = ";
	std::cin >> temp_X;
	std::cout << "Y = ";
	std::cin >> temp_Y;
	for (int i = 0; i < vecCoorX.size(); i++) {
		vecCoorX[i].second += temp_X;
		vecCoorY[i].second += temp_Y;
	}
}
void Square::scaleX() {
	int temp_X = 0;
	std::cout << "¬ведите новые координаты X: " << std::endl;
	for (auto& it : vecCoorX) {
		it.second *= temp_X;
	}
}
void Square::scaleY() {
	int temp_Y = 0;
	std::cout << "¬ведите новые координаты Y: " << std::endl;
	for (auto& it : vecCoorY) {
		it.second *= temp_Y;
	}
}
void Square::scale() {
	int temp_X = 0,
		temp_Y = 0;
	std::cout << "¬ведите новые координаты изменений площади: " << std::endl;
	std::cout << "X = ";
	std::cin >> temp_X;
	std::cout << "Y = ";
	std::cin >> temp_Y;
	for (int i = 0; i < vecCoorX.size(); i++) {
		vecCoorX[i].second /= temp_X;
		vecCoorY[i].second /= temp_Y;
	}
}