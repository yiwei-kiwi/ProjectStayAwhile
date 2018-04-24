#pragma once
#include <string>
#include "Util.h"
namespace ARPG {
	class Entity : public Object
	{
	public:
		Entity(const std::string &name, Vector velocity, Coord location, unsigned int teamID = 0);
		virtual ~Entity() = 0;
		unsigned int getTeamID() const;
		void setTeamID(unsigned int teamID);
		Vector getVelocity() const;
		void move();

	protected:
		const std::string name;
		Vector velocity;
		unsigned int teamID;
	};
}

