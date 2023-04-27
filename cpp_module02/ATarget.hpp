#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
	std::string _type;
public:
	ATarget();
	ATarget(std::string const &);
	ATarget(ATarget const &);
	virtual ~ATarget();

	ATarget &operator = (ATarget const &);

	std::string const &getType() const;

	void	getHitBySpell(ASpell const &) const;

	virtual	ATarget *clone(void) const = 0;
};
