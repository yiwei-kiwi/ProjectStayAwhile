#include "Entity.h"

ARPG::Entity::Entity(const std::string &name, Vector velocity, Coord location, unsigned int teamID = 0) : Object(location, 'e'), name(name), velocity(velocity), teamID(teamID) {}

unsigned int ARPG::Entity::getTeamID() const
{
	return this->teamID;
}

void ARPG::Entity::setTeamID(unsigned int teamID)
{
	this->teamID = teamID;
}
