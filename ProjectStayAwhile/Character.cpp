#include "Character.h"

int ARPG::Character::getMaxHP() const
{
	return this->maxHP;
}

int ARPG::Character::getCurHP() const
{
	return this->curHP;
}

int ARPG::Character::getMaxMana() const
{
	return this->maxMana;
}

int ARPG::Character::getCurMana() const
{
	return this->curMana;
}

void ARPG::Character::setMaxHP(int maxHP)
{
	if (this->curHP > maxHP)
		this->curHP = (this->curHP / this->maxHP) * maxHP;
	this->maxHP = maxHP;
}

void ARPG::Character::changeHP(int hpDiff)
{
	this->curHP += hpDiff;
	if (this->curHP <= 0) {
		this->curHP = 0;
	}
}

void ARPG::Character::setMaxMana(int maxMana)
{
	if (this->curMana > maxMana)
		this->curHP = (this->curMana / this->maxMana) * maxMana;
	this->maxMana = maxMana;
}

void ARPG::Character::changeMana(int manaDiff)
{
	this->curMana += manaDiff;
}

//void ARPG::Character::applyEffect(Effect type)
//{
//
//}
