#pragma once
#include "Weapon.h"
#include <iostream>
using namespace std;

class DragonSword :public Weapon
{
public:
	DragonSword();

	// ��ȡ�����˺�
	virtual int getBaseDamage() ;
	// ��ȡ��Ѫ�˺�
	virtual int getSukBlood() ;

	// ��ȡ����
	virtual bool getHold() ;

	// ��ȡ����
	virtual bool getCrit() ;

	// ������ ��Ѫ�� ������
	int suckRate;
	int holdRate;
	int crikRate;

	// ������� �ж��Ƿ񴥷�
	bool isTrigger(int rate);
};

