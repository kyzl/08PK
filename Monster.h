#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Hero.h"

class Hero;

class Monster {
public :

	string m_MonsterName; // Ӣ����
	int m_Atk; // ������
	int m_Def; // ������
	int m_Hp; // Ѫ��

	bool is_Hold; //����
	Monster();

	void attackHero(Hero *hero);

};