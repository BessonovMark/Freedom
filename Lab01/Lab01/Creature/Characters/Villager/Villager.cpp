#include <Villager.h>



void VillagerSkill::useSkill(std::shared_ptr<creatures::Creature> user){
	helper_->getEnemyTarget(0)->GetDamage(user);
}

VillagerSkill::VillagerSkill(std::shared_ptr<ITargetHelper> helper): Skill::Skill(helper)
{}



void Villager::Action() {

}

Villager::Villager(std::shared_ptr<Skill> ability)
{
	abilities_.push_back(ability);
	hp_ = 50;
	armore_ = 50;
	initiative_ = 50;
	damage_ = 20;
	isDefend_ = false;
}