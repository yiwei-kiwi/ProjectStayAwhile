#pragma once
#include <string>
#include "Util.h"
namespace ARPG {
	class Entity : public Object
	{
	public:
		Entity(std::string name, Vector velocity, unsigned int teamID, Coord location);
		virtual ~Entity() = 0;
	protected:
		const std::string name;
		Vector velocity;
		unsigned int teamID;
	};
}

