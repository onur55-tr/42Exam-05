#include "SpellBook.hpp"


SpellBook::SpellBook() {}
SpellBook::~SpellBook() {
	std::vector<ASpell *>::iterator itE = _as.end();

	for (std::vector<ASpell *>::iterator it = _as.begin(); it != itE; ++it)
		delete *it;
	_as.clear();
}

void SpellBook::learnSpell(ASpell *s_ ) {
	if ( s_ ) {
		std::vector<ASpell *>::iterator itE = _as.end();

		for (std::vector<ASpell *>::iterator it = _as.begin(); it != itE; ++it)
			if ( (*it)->getName() == s_->getName() )
				return ;
		_as.push_back(s_->clone());
	}
}

void SpellBook::forgetSpell(std::string const &spellName ) {
	std::vector<ASpell *>::iterator itE = _as.end();

	for (std::vector<ASpell *>::iterator it = _as.begin(); it != itE; ++it)
		if ( (*it)->getName() == spellName ) {
			delete *it;
			it = _as.erase(it);
		}
}

ASpell	*SpellBook::generateSpell(std::string const &sn_ ) {
	std::vector<ASpell *>::iterator itE = _as.end();

	for (std::vector<ASpell *>::iterator it = _as.begin(); it != itE; ++it)
		if ( (*it)->getName() == sn_ )
			return *it;
	return (0);
}
