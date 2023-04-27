#pragma once

#include "ATarget.hpp"

class ATarget;

class ASpell {
private:
	std::string	_name;
	std::string	_effects;

public:
	ASpell();
	ASpell(std::string const &, std::string const &);
	ASpell(const ASpell &);
	ASpell &operator = (const ASpell &);
	virtual ~ASpell();

	std::string const &getName(void) const;
	std::string const &getEffects(void) const;

	virtual ASpell *clone( void ) const = 0;

	void	launch(ATarget const &) const;
};
