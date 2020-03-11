#pragma once

#include <Creature.h>
#include <BattleField.h>
#include <memory>


struct position {
	int x, y;
};

class ITargetHelper: public BattleField
{
public:
	virtual std::shared_ptr <Creature> GetTarget(position pos) = 0;
	virtual ~ITargetHelper();
};