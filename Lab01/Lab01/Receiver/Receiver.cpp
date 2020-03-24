#include <Receiver.h>
#include <iostream>


position::position(int _x, int _y) : x(_x), y(_y)
{}

position::position() : x(-1), y(-1)
{}


position Receiver::AskPosition() {
	position target;
	std::cout << "Enter target position: ";
	std::cin >> target.x >> target.y;
	return target;
}