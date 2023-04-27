#include "Warlock.hpp"

Warlock::Warlock(std::string const &name_, std::string const &title_ ): _name( name_ ), _title( title_ ) {
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!"<< std::endl;
}

std::string const &Warlock::getName(void) const {
	return (_name);
}

std::string const &Warlock::getTitle(void) const {
	return (_title);
}

void Warlock::setTitle( std::string const &t_ ) {
	_title = t_;
}
