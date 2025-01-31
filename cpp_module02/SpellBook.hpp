#pragma once
#include "ASpell.hpp"
#include <map>

class SpellBook
{
private:
	std::map<std::string, ASpell *> _spellbook;

public:
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	ASpell *createSpell(std::string const &spell);
};