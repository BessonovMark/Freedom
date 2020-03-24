#pragma once
#include <ITargetHelper.h>
#include <vector>
#include <Receiver.h>


class BattleField : public ITargetHelper
{
public:
	std::shared_ptr <creatures::Creature> getEnemyTarget(const int& UserTeam);
	std::shared_ptr <creatures::Creature> getAllyTarget(const int& UserTeam);
	std::shared_ptr <creatures::Creature> getRandomAllyTarget(const int& UserTeam);
	std::shared_ptr <creatures::Creature> getRandomEnemyTarget(const int& UserTeam);
	BattleField(int map_size_x, int map_size_y);
	~BattleField(){}
private:
	std::vector< std::vector < std::shared_ptr<creatures::Creature> > > Map_;
	Receiver input_;
};