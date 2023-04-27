#pragma once

#include <iostream>
#include "ASpell.hpp"
#include <map>

class Warlock {
private:
	std::string _name;
	std::string _title;

	std::map<std::string, ASpell*> spells; //ex01

public:
	Warlock( std::string const &, std::string const &);
	virtual ~Warlock();

	Warlock(); //does not compile
	Warlock( Warlock const & ); //does not compile
	Warlock &operator = ( Warlock const & ); //does not compile

	std::string const &getName( void ) const;
	std::string const &getTitle( void ) const;

	void	setTitle(std::string const &);
	void	introduce( void ) const;

	void	learnSpell(ASpell *);
	void	forgetSpell(std::string);
	void	launchSpell(std::string, ATarget const &);
};