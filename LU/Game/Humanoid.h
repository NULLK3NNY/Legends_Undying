#pragma once
#include "Entity.h"

class Humanoid : public Entity
{
public:
	// Humanoid base stats
	int level = { 1 };
	double health = { 100 };
	double stamina = { 100 };
	double attack = { 5 };
	double specialAttack = { 0 };
	double speed = { 100 };
	// Humanoid flags
	bool isAlive = { true };
private:

};

