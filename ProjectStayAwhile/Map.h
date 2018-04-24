#pragma once
#include "Util.h"

namespace ARPG {
	class Tile {
	public:
		Tile(Object *obj = nullptr);
		~Tile();
		bool isEmpty();
		void setObj(Object *obj);
		Object*& getObj();
	private:
		Object *obj;
	};

	class Map {
	public:
		Map(int length, int width);
		Map(const Map &copy) = delete;
		bool isCoordInBound(Coord location);
		bool isObjectInBound(const Object &object);
		Object*& getObjectAt(Coord location);
		bool willObjCollide(const Object &object);
		Object* removeObject(Coord location);
		bool addObject(Object *newObject);
		bool moveObject(Coord old);
	private:
		const int length;
		const int width;
		std::vector<std::vector<Tile>> map;
	};
}

