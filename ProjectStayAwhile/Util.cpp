#include "Util.h"

using ARPG::Coord;

ARPG::Coord::Coord(int _x, int _y) : x(_x), y(_y) {}

bool ARPG::operator==(const Coord & lhs, const Coord & rhs)
{
	return ((lhs.x == rhs.x) && (rhs.y == rhs.y));
}

bool ARPG::operator!=(const Coord & lhs, const Coord & rhs)
{
	return !(lhs == rhs);
}

ARPG::Vector::Vector(double magnitude, double direction) : magnitude(magnitude)
{
	if (direction > 0.0 && direction <= 360) {
		this->direction = direction;
	}
	else {
		this->direction = 360;
	}
}

void ARPG::Object::setLocation(Coord newLocation)
{
	this->location = newLocation;
}

Coord ARPG::Object::getLocation() const
{
	return this->location;
}

char ARPG::Object::getType() const
{
	return this->type;
}

void ARPG::Object::setTexture(const sf::Texture * texture)
{
	this->sfmlObj.setTexture(texture);
}

void ARPG::Object::setTextureRect(const sf::IntRect & rect)
{
	this->sfmlObj.setTextureRect(rect);
}

sf::RectangleShape & ARPG::Object::getDrawable()
{
	return this->sfmlObj;
}
