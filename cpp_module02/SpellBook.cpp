#include "SpellBook.hpp"


SpellBook::SpellBook() {}
SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator it = _as.begin();
	std::map<std::string, ASpell *>::iterator ite = _as.end();

	while (it != ite)
	{
		delete it->second;
		++it;
	}
	_as.clear();
}

void	SpellBook::learnSpell(ASpell *a) {
	if (a)
		_as.insert(std::pair<std::string, ASpell *>(a->getName(), a->clone()));
}

void	SpellBook::forgetSpell(std::string const &a) {
	std::map<std::string, ASpell *>::iterator it = _as.find(a);

	if (it != _as.end())
		delete it->second;
	_as.erase(a);
}

ASpell	*SpellBook::createSpell(std::string const &a) {
	std::map<std::string, ASpell *>::iterator it = _as.find(a);

	if (it != _as.end())
		return _as[a];
	return NULL;
}
