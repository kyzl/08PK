#pragma once
#include <iostream>
using namespace std;
#include <string>

// ������
class Weapon {
public:

	// ��ȡ�����˺�
	virtual int getBaseDamage() = 0;
	// ��ȡ��Ѫ�˺�
	virtual int getSukBlood() = 0;

	// ��ȡ����
	virtual bool getHold() = 0;
	 
	// ��ȡ����
	virtual bool getCrit() = 0;

	string m_WeaponName; // ��������
	int baseDamage; // �����˺�
	virtual ~Weapon();
};
