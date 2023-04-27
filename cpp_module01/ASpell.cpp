#include "ASpell.hpp"

ASpell::ASpell(): _name(), _effects() {}

ASpell::ASpell( std::string const &n_, std::string const &e_ ): _name(n_), _effects(e_) {}

ASpell::ASpell( ASpell const &o ): _name(o._name), _effects(o._effects) {}

ASpell &ASpell::operator = (ASpell const &o ) {
	this->_name = o._name;
	this->_effects = o._effects;
	return (*this);
}

ASpell::~ASpell() {}

std::string	const &ASpell::getName() const { return ( _name ); }
std::string	const &ASpell::getEffects() const { return ( _effects ); }

void	ASpell::launch( ATarget const &o ) const { o.getHitBySpell(*this); }
