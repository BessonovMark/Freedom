#pragma once


struct position {
	int x, y;
	position(int _x, int _y);
	position();
};

class Receiver {
public:
	position AskPosition();
};