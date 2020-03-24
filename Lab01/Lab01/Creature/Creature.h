#pragma once
#include <Skill.h>
#include <vector>
#include <memory>

namespace creatures {
class Creature {
public:
	virtual void Action() = 0;
	void GetDamage(std::shared_ptr<Creature> attacker);
	virtual ~Creature();
	int GetInitiative() const { return initiative_; };
	int GetTeam() const { return team_; }
protected:
	std::vector <std::shared_ptr<Skill> > abilities_;
	int hp_;
	int armore_;
	int initiative_;
	int damage_;
	bool isDefend_;
	int team_;
};
}