#pragma once
#include <vector>
#include <Skill.h>

class Creature {
public:
	Creature() {}
private:
	std::vector <Skill> skills_;
	int hp_, maxHp_;
	int armore_;
	bool isDefence_;
};