#pragma once
#include <Creature.h>
#include <vector>

class Controller {
public:
	void Round();
private:
	std::vector < std::shared_ptr<creatures::Creature> > turn_order_;
};