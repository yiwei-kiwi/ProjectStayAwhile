#include "Map.h"

ARPG::Tile::Tile(Object * obj)
{
}

bool ARPG::Tile::isEmpty()
{
	return (this->obj == nullptr);
}

void ARPG::Tile::setObj(Object * obj)
{
	this->obj = obj;
}

ARPG::Object *& ARPG::Tile::getObj()
{
	return this->obj;
}

ARPG::Map::Map(int length, int width) : length(length), width(width)
{
	map.reserve(this->length * 2);
	for (int x = 0; x < this->length; ++x) {
		map.at(x).reserve(this->width * 2);
		for (int y = 0; y < this->width; ++y) {
			map.at(x).at(y) = Tile();
		}
	}
}

bool ARPG::Map::isCoordInBound(Coord location)
{
	if ((location.x < length) && (location.x >= 0)) {
		if ((location.y < width) && (location.y >= 0))
			return true;
	}
	return false;
}

bool ARPG::Map::isObjectInBound(const Object & object)
{
	return false;
}

ARPG::Object *& ARPG::Map::getObjectAt(Coord location)
{
	return map.at(location.x).at(location.y).getObj();
}

bool ARPG::Map::willObjCollide(const ARPG::Object & object)
{
	if (!this->isObjectInBound(object))
		return false;
	Coord newLocation = object.getLocation();
	for (int len = 0; len < object.length; ++len) {
		for (int wid = 0; wid < object.width; ++wid) {
			newLocation = object.getLocation();
			newLocation.x += len;
			newLocation.y += wid;
			if (this->getObjectAt(newLocation) != nullptr) {
				return false;
			}
		}
	}
	return true;
}

ARPG::Object * ARPG::Map::removeObject(Coord location)
{
	if (this->getObjectAt(location)->getLocation() == location) {
		
	}
	return nullptr;
}

bool ARPG::Map::addObject(Object * newObject)
{
	return false;
}
