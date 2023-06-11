#include "Cube.h"

Cube::Cube() {
	std::cout << "¬ведите координаты куба: " << std::endl;
	for (int i = 0; i < vecCoorZ.size(); i++) {
		std::cout << vecCoorX[i].first << " = ";
		std::cin >> vecCoorX[i].second;
		std::cout << vecCoorY[i].first << " = ";
		std::cin >> vecCoorY[i].second;
		std::cout << vecCoorZ[i].first << " = ";
		std::cin >> vecCoorZ[i].second;
	}

	a = abs(vecCoorX[0].second - vecCoorX[1].second);
	b = abs(vecCoorY[0].second - vecCoorY[1].second);
	c = abs(vecCoorZ[0].second - vecCoorZ[1].second);
}

void Cube::printVecCoor() {
	for (int i = 0; i < vecCoorY.size(); i++) {
		std::cout << vecCoorX[i].first << " = " << vecCoorX[i].second << std::endl;
		std::cout << vecCoorY[i].first << " = " << vecCoorY[i].second << std::endl;
		std::cout << vecCoorZ[i].first << " = " << vecCoorZ[i].second << std::endl;
	}
}
int Cube::findSquare() {
	square_ = 2 * a * b + 2 * a * c + 2 * b * c;
	return square_;
}
int Cube::findVolume() {
	volume_ = a * b * c;
	return volume_;
}
void Cube::transShift() {
	int temp_X = 0,
		temp_Y = 0,
		temp_Z = 0;
	std::cout << "¬ведите новые координаты куба: " << std::endl;
	std::cout << "X = ";
	std::cin >> temp_X;
	std::cout << "Y = ";
	std::cin >> temp_Y;
	std::cout << "Z = ";
	std::cin >> temp_Z;
	for (int i = 0; i < vecCoorX.size(); i++) {
		vecCoorX[i].second += temp_X;
		vecCoorY[i].second += temp_Y;
		vecCoorZ[i].second += temp_Z;
	}
}
void Cube::scaleX() {
	int temp_X = 0;
	std::cout << "¬ведите новые координаты X: " << std::endl;
	for (auto& it : vecCoorX) {
		it.second *= temp_X;
	}
}
void Cube::scaleY() {
	int temp_Y = 0;
	std::cout << "¬ведите новые координаты Y: " << std::endl;
	for (auto& it : vecCoorY) {
		it.second *= temp_Y;
	}
}
void Cube::scaleZ() {
	int temp_Z = 0;
	std::cout << "¬ведите новые координаты Z: " << std::endl;
	for (auto& it : vecCoorY) {
		it.second *= temp_Z;
	}
}
void Cube::scale() {
	int temp_X = 0,
		temp_Y = 0,
		temp_Z = 0;
	std::cout << "¬ведите новые координаты изменений куба: " << std::endl;
	std::cout << "X = ";
	std::cin >> temp_X;
	std::cout << "Y = ";
	std::cin >> temp_Y;
	std::cout << "Z = ";
	std::cin >> temp_Z;
	for (int i = 0; i < vecCoorX.size(); i++) {
		vecCoorX[i].second /= temp_X;
		vecCoorY[i].second /= temp_Y;
		vecCoorZ[i].second /= temp_Z;
	}
}