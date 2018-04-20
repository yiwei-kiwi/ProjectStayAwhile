#pragma once
#include "Entity.h"

namespace ARPG {
	class Effect;
	class Character : public Entity {
	public:
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