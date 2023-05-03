#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
	std::map<std::string, ATarget *>::iterator it = _as.begin();
	std::map<std::string, ATarget *>::iterator ite = _as.end();

	while (it != ite)
	{
		delete it->second;
		++it;
	}
	_as.clear();
}

void	TargetGenerator::learnTargetType(ATarget *a) {
	if (a)
		_as.insert(std::pair<std::string, ATarget *>(a->getType(), a->clone()));
}

void	TargetGenerator::forgetTargetType(std::string const &a) {
	std::map<std::string, ATarget *>::iterator it = _as.find(a);

	if (it != _as.end())
		delete it->second;
	_as.erase(a);
}

ATarget	*TargetGenerator::createTarget(std::string const &a) {
	std::map<std::string, ATarget *>::iterator it = _as.find(a);

	if (it != _as.end())
		return _as[a];
	return NULL;
}
