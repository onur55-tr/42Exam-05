#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {
	std::vector<ATarget *>::iterator itE = _type.end();

	for (std::vector<ATarget *>::iterator it = _type.begin(); it != itE; ++it)
		delete *it;
	_type.clear();
}

void	TargetGenerator::learnTargetType(ATarget *t_ ) {
	if ( t_ ) {
		std::vector<ATarget *>::iterator itE = _type.end();

		for (std::vector<ATarget *>::iterator it = _type.begin(); it != itE; ++it)
			if ( (*it)->getType() == t_->getType() )
				return ;
		_type.push_back(t_->clone());
	}
}

void	TargetGenerator::forgetTargetType(std::string const &t_ ) {
	std::vector<ATarget *>::iterator itE = _type.end();

	for (std::vector<ATarget *>::iterator it = _type.begin(); it != itE; ++it)
		if ( (*it)->getType() == t_ ) {
			delete *it;
			it = _type.erase(it);
		}
}

ATarget	*TargetGenerator::createTarget(std::string const &t_ ) {
	std::vector<ATarget *>::iterator itE = _type.end();

	for (std::vector<ATarget *>::iterator it = _type.begin(); it != itE; ++it)
		if ( (*it)->getType() == t_ )
			return *it;
	return (0);
}
