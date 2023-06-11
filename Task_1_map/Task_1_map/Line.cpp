#include "Line.h"

Line::Line() {
	std::cout << "¬ведите координаты линии: " << std::endl;
	for (int i = 0; i < vecCoorY.size(); i++) {
		std::cout << vecCoorX[i].first << " = ";
		std::cin >> vecCoorX[i].second;
		std::cout << vecCoorY[i].first << " = ";
		std::cin >> vecCoorY[i].second;
	}
}

void Line::printVecCoor() {
	for (int i = 0; i < vecCoorY.size(); i++) {
		std::cout << vecCoorX[i].first << " = " << vecCoorX[i].second << std::endl;
		std::cout << vecCoorY[i].first << " = " << vecCoorY[i].second << std::endl;
	}
}
int Line::findSquare() {
	square_ = 0;
	return square_;
}
int Line::findVolume() {
	volume_ = 0;
	return volume_;
}
void Line::transShift() {
	int temp_X = 0,
		temp_Y = 0;
	std::cout << "¬ведите новые координаты: " << std::endl;
	std::cout << "X = ";
	std::cin >> temp_X;
	std::cout << "Y = ";
	std::cin >> temp_Y;
	for (int i = 0; i < vecCoorX.size(); i++) {
		vecCoorX[i].second += temp_X;
		vecCoorY[i].second += temp_Y;
	}
}
void Line::scaleX() {
	int temp_X = 0;
	std::cout << "¬ведите новые координаты X: " << std::endl;
	for (auto& it : vecCoorX) {
		it.second *= temp_X;
	}
}
void Line::scaleY() {
	int temp_Y = 0;
	std::cout << "¬ведите новые координаты Y: " << std::endl;
	for (auto& it : vecCoorY) {
		it.second *= temp_Y;
	}
}
void Line::scale() {
	int temp_X = 0,
		temp_Y = 0;
	std::cout << "¬ведите новые координаты изменений: " << std::endl;
	std::cout << "X = ";
	std::cin >> temp_X;
	std::cout << "Y = ";
	std::cin >> temp_Y;
	for (int i = 0; i < vecCoorX.size(); i++) {
		vecCoorX[i].second /= temp_X;
		vecCoorY[i].second /= temp_Y;
	}
}