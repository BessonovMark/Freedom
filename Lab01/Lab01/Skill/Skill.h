#pragma once

#include <memory>
#include <ITargetHelper.h>
class Skill {
public:
	virtual void emit() = 0;

	virtual ~Skill();
private:
	std::shared_ptr <ITargetHelper> helper_;
};