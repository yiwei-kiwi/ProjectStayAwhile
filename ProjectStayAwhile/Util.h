#pragma once
#include <vector>
#include <string>

/*
define classes that needs to be shared amongst all files here.
*/
namespace ARPG {

	struct Coord { //because this is a struct, it can be simply represented by {x,y}, kinda copied over from my chess game
		int x;
		int y;

		Coord(int _x = 0, int _y = 0);
		friend bool operator==(const Coord &lhs, const Coord &rhs);
		friend bool operator!=(const Coord &lhs, const Coord &rhs);
	};
	
	struct Vector{
		double magnitude;
		double direction; //direction must be (0,360]

		Vector(double magnitude, double direction);
		//add == operators if you want but be warned, doubles can become inaccurate and comparing them may not yield the intended results
	};

	class Object { //object as in an object on a map, inherits into entity and sturcture, although we're not going to implement structure for the time being
	public:
		Object(Coord location, char type) : location(location), type(type) {};
		virtual ~Object() = 0;

		void setLocation(Coord newLocation);
		Coord getLocation() const;
		char getType() const;
		std::vector<Coord>& getOccupied(); //it returns a reference because it might be useful to manipulate the vector, but if it proves to be uneccesary make this method const
	protected:
		Coord location;//where the start of the object is
		std::vector<Coord> occupied; //other locations where the object precides
		const char type; //type of object, e for entity or s for structure, entity can't be turned into a structure so its const
	};
}