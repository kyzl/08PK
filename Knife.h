#pragma once
#include "Weapon.h"
#include <iostream>
using namespace std;

class Knife : public Weapon {
public:

	Knife();

	// ��ȡ�����˺�
	virtual int getBaseDamage();
	// ��ȡ��Ѫ�˺�
	virtual int getSukBlood();

	// ��ȡ����
	virtual bool getHold();

	// ��ȡ����
	virtual bool getCrit();
};