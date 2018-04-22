#pragma once
#include <vector>
#include <string>
#include <SFML\Graphics.hpp>

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

	struct Vector {
		double magnitude;
		double direction; //direction must be (0,360]

		Vector(double magnitude, double direction);
		//add == operators if you want but be warned, doubles can become inaccurate and comparing them may not yield the intended results
	};

	class Object { //object as in an object on a map, inherits into entity and sturcture
	public:
		Object(Coord location, char type, int length = 0, int width = 0) : location(location), type(type), length(length), width(width) {};
		virtual ~Object() = 0;

		void setLocation(Coord newLocation);
		Coord getLocation() const;
		char getType() const;
		void setTexture(const sf::Texture *texture);
		void setTextureRect(const sf::IntRect &rect);
		

		int length;
		int width;

		
	protected:
		Coord location;//where the start of the object is
		const char type; //type of object, e for entity or s for structure, entity can't be turned into a structure so its const
		sf::RectangleShape sfmlObj;
	};
}