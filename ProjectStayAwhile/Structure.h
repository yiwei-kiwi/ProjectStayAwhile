#pragma once
#include "Util.h"

namespace ARPG{
	class Structure : public Object
	{
	public:
		Structure(Coord location, int length = 0, int width = 0);
		~Structure();
		virtual bool isObstruction() const;
	};
}

