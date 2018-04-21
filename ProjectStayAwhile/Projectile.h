#pragma once
#include <string>
#include <vector>
#include "Entity.h"

namespace ARPG {
	class Effect;
	class Projectile : public Entity
	{
	public:
		Projectile(std::string name, Vector velocity, Coord location, const std::vector<Effect *> &effectList, unsigned int teamID = 0);
		~Projectile();
	private:
		const std::vector<Effect*> effects;

	};
}

