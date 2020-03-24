#pragma once
#include <ITargetHelper.h>


class Skill {
public:
	virtual void useSkill(std::shared_ptr<creatures::Creature> user) = 0;
	Skill(std::shared_ptr<ITargetHelper> helper);
protected:
	std::shared_ptr<ITargetHelper> helper_;
};