#include "Entity.h"
#include <cmath>
#define PI 3.14159265

ARPG::Entity::Entity(const std::string &name, Vector velocity, Coord location, unsigned int teamID = 0) : Object(location, 'e'), name(name), velocity(velocity), teamID(teamID) {}

unsigned int ARPG::Entity::getTeamID() const
{
	return this->teamID;
}

void ARPG::Entity::setTeamID(unsigned int teamID)
{
	this->teamID = teamID;
}

void ARPG::Entity::move()
{
	double xOffset = 0, yOffset = 0;
	xOffset = this->velocity.magnitude * std::sin(this->velocity.direction * PI / 180);
	yOffset = this->velocity.magnitude * std::cos(this->velocity.direction * PI / 180);
	this->location.x += xOffset;
	this->location.y += yOffset;
}
