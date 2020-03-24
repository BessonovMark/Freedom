#include <BattleField.h>
#include <cstdlib>
#include <ctime>

std::shared_ptr <creatures::Creature> BattleField::getEnemyTarget(const int& UserTeam) {
	position pos;
	pos = input_.AskPosition();
	//if (Map_[pos.x][pos.y]->GetTeam() == UserTeam) return nullptr;
	return Map_[pos.x][pos.y];
}

std::shared_ptr <creatures::Creature> BattleField::getAllyTarget(const int& UserTeam) {
	position pos;
	pos = input_.AskPosition();
	//if (Map_[pos.x][pos.y]->GetTeam() != UserTeam) return nullptr;
	return Map_[pos.x][pos.y];
}

std::shared_ptr <creatures::Creature> BattleField::getRandomAllyTarget(const int& UserTeam) {
	position pos;
	return Map_[pos.x][pos.y];
}

std::shared_ptr <creatures::Creature> BattleField::getRandomEnemyTarget(const int& UserTeam) {
	position pos;

	return Map_[pos.x][pos.y];
}


BattleField::BattleField(int map_size_x, int map_size_y) {
	Map_.resize(map_size_x);
	for (int i = 0; i < map_size_x; ++i) {
		Map_[i].resize(map_size_y);
	}
}