#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator {
private:
	std::map<std::string, ATarget *> _as;
public:
	TargetGenerator();
	virtual ~TargetGenerator();

	TargetGenerator(TargetGenerator const &);
	TargetGenerator &operator = (TargetGenerator const &);

	void	learnTargetType(ATarget *);
	void	forgetTargetType(std::string const &);
	ATarget	*createTargetType(std::string const &);
};
