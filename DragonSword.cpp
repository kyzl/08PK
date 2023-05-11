#include "DragonSword.h"


DragonSword::DragonSword()
{
	this->baseDamage = 20;
	this->m_WeaponName = "��������";
	this->suckRate = 20;
	this->holdRate = 35;
	this->crikRate = 40;
}

int DragonSword::getBaseDamage()
{
	return this->baseDamage;
}

int DragonSword::getSukBlood()
{
	if (isTrigger(this->suckRate)) {

		return  this->baseDamage /2; // ���������˺���һ����Ѫ
	}else{
	
		return 0;
	}
	
}

bool DragonSword::getHold()
{
	if (isTrigger(this->holdRate)) {
		return true;
	}
	return false;
}

bool DragonSword::getCrit()
{
	if (isTrigger(this->crikRate)) {
		return true;
	}
	return false;
}

bool DragonSword::isTrigger(int rate)
{
	// ͨ��isTrigger���ж��Ƿ񴥷���Ч
	// ���0-100������
	int num = rand() % 100 + 1;

	if (num < rate) {

		return true;
	}else return false;
}
