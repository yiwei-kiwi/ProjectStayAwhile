#pragma once
#include "Entity.h"

namespace ARPG {
	class Effect;
	class Character : public Entity {
	public:
		Character(std::string name, Coord location, unsigned teamID, int maxHP, int maxMana);
		virtual ~Character() = 0;

		int getMaxHP() const;
		int getCurHP() const;
		int getMaxMana() const;
		int getCurMana() const;

		void setMaxHP(int maxHP);
		void changeHP(int hpDiff);
		void setMaxMana(int maxMana);
		void changeMana(int manaDiff);

		void applyEffect(Effect type);
	protected:
		int maxHP;
		int curHP;
		int maxMana;
		int curMana;
	};
}