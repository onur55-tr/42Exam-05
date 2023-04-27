#pragma once

#include "ATarget.hpp"
#include <vector>

class TargetGenerator {
private:
	std::vector<ATarget *> _type;
public:
	TargetGenerator();
	virtual ~TargetGenerator();

	void	learnTargetType(ATarget *);
	void	forgetTargetType(std::string const &);
	ATarget *createTarget(std::string const &);
};
