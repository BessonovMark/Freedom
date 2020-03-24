#pragma once
#include <memory>

namespace creatures {
	class Creature;
}



class ITargetHelper {
public:
	virtual std::shared_ptr <creatures::Creature> getEnemyTarget(const int& UserTeam) = 0;
	virtual std::shared_ptr <creatures::Creature> getAllyTarget(const int& UserTeam) = 0;
	virtual std::shared_ptr <creatures::Creature> getRandomAllyTarget(const int& UserTeam) = 0;
	virtual std::shared_ptr <creatures::Creature> getRandomEnemyTarget(const int& UserTeam) = 0;
	virtual ~ITargetHelper(){}
};