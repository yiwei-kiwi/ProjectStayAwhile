#include "Character.h"

//void ARPG::Character::applyEffect(Effect type)
//{
//
//}

int ARPG::Character::getMaxHP()
{
	return maxHP;
}

void ARPG::Character::setMaxHP(int newHP)
{
	if (newHP <= maxHP)
	{
		maxHP = newHP;
	}
}

int ARPG::Character::getCurHP()
{
	return curHP;
}

int  ARPG::Character::getMaxMana()
{
	return maxMana;
}

void ARPG::Character::setMaxMana(int newMana)
{
	if (newMana <= maxMana)
	{
		maxMana = newMana;
	}
}

int ARPG::Character::getCurMana()
{
	return curMana;
}

void ARPG::Character::healHP(int newHP)
{
	if (curHP + newHP < maxHP)
	{
		curHP = curHP + newHP;
    }
}

void ARPG::Character::damageHP(int newHP)
{
	curHP = curHP - newHP;
}

void ARPG::Character::healMana(int newMana)
{
	if (curMana + newMana < maxMana)
	{
		curMana = curMana + newMana;
	}
}

void ARPG::Character::damagaMana(int newMana)
{
	curMana = curMana - newMana;
}