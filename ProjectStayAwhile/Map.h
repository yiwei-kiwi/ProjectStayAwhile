#pragma once
#include "Util.h"

namespace ARPG {
	class Tile {
	public:
		Tile(Object *obj = nullptr);
		~Tile();
		bool isEmpty();
	private:
		Object *obj;
	};

	class Map {
	public:
		Map(int length, int width);

		bool isCoordInBound(Coord location);
	private:
		const int length;
		const int width;
		std::vector<std::vector<Tile>> map;
	};
}

