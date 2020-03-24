#pragma once
#include <Creature.h>
#include <Skill.h>

class VillagerSkill : public Skill
{
public:
	void useSkill(std::shared_ptr<creatures::Creature> user) override;
	VillagerSkill(std::shared_ptr<ITargetHelper> helper);
};

class Villager : public creatures::Creature
{
public:
	void Action() override;
	Villager(std::shared_ptr<Skill> ability);
};

