#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Weapon.h"
#include "Monster.h"

class Monster; // ������  

class Hero {

public:
	string m_HeroName; // Ӣ����
	int m_Atk; // ������
	int m_Def; // ������
	int m_Hp; // Ѫ��

	Hero();

	// ����
	Weapon  * weapon;

	void equipWeapon(Weapon  * weapon);
	void attckMonster(Monster * monster);	 
};