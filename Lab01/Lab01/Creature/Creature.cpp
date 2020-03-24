#include <Creature.h>

creatures::Creature::~Creature() {
}

void creatures::Creature::GetDamage(std::shared_ptr<Creature> attacker) {
	int damage = attacker->damage_;
	if (isDefend_ == true) damage /= 2;
	damage = damage * (100 - armore_)/100;
	hp_ -= damage;
}