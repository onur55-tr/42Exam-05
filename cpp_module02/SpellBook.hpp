#pragma once

#include "ASpell.hpp"
#include <vector>

class SpellBook {
private:
	std::vector<ASpell *> _as;
	SpellBook(SpellBook const &);
	SpellBook &operator = (SpellBook const &);
public:
	SpellBook();
	virtual ~SpellBook();

	void	learnSpell(ASpell *);
	void	forgetSpell(std::string const &);
	ASpell	*generateSpell(std::string const &);
};
