#pragma once
#include "Character.h"

namespace ARPG {
	class PlayerClass : public Character {
	public:
		PlayerClass(const std::string &name, Coord location);
		~PlayerClass();
	private:
		
	};
}