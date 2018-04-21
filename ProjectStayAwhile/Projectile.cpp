#include "Projectile.h"



ARPG::Projectile::Projectile(std::string name, Vector velocity, Coord location, const std::vector<Effect *> &effectList, unsigned int teamID) :
	Entity(name, velocity, location, teamID), effects(effectList)
{
}

ARPG::Projectile::~Projectile()
{

}