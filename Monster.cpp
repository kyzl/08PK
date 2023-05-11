#include "Monster.h"

Monster::Monster()
{
	this->m_Hp = 300;
	this->m_Atk = 10;
	this->m_Def = 40;
	this->m_MonsterName = "��˹��";
	this->is_Hold = false;
}

void Monster::attackHero(Hero * hero)
{
	//
	if (this->is_Hold) {
		cout << "����"<< this->m_MonsterName<<"�������ˣ����غ��޷�����" << endl;
		return;
	}

	// ���㹥���˺�
	int damage = (this->m_Atk - hero->m_Def) > 0 ? this->m_Atk - hero->m_Def : 1;

	hero->m_Hp -= damage;
	cout << "����" << this->m_MonsterName << "������" << hero->m_HeroName << ",�����"
		<< damage << "�˺�" << endl;

}
