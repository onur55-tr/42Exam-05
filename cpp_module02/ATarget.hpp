#pragma once

#include "ASpell.hpp"
#include <iostream>

class ASpell;

class ATarget {
private:
    std::string _t;
public:
    ATarget();
    ATarget(std::string const &);
    ATarget(ATarget const &);
    ATarget &operator = (ATarget const &);
    virtual ~ATarget();

    std::string const &getType() const;
    void    getHitBySpell(ASpell const &) const;
    virtual ATarget *clone() const = 0;

};