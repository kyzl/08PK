#include "Hero.h"

Hero::Hero()
{
	this->m_Hp = 500;
	this->m_Atk = 50;

	this->m_Def = 50;
	this->m_HeroName = "���޼�";
	this->weapon = NULL;
}

// װ������
void Hero::equipWeapon(Weapon * weapon)
{

	this->weapon = weapon;
	cout << "Ӣ��" << m_HeroName << "װ����" << weapon->m_WeaponName << " ����" << endl;
}

// ����
void Hero::attckMonster(Monster * monster)
{
	int damage = 0;
	int addHp = 0;
	bool isHold = false;
	bool isCrit = false;

	if (this->weapon == NULL) { // û������ �˺�û�мӳ�
		damage = this->m_Atk; 
	}
	else {
		damage = this->m_Atk + this->weapon->getBaseDamage();
		// ������Ѫ
		addHp = this->weapon->getSukBlood();
		// ���㶨��
		isHold = this->weapon->getHold();
		// �Ƿ񱩻�
		isCrit = this->weapon->getCrit();
	}

	if (isCrit) { // �����˺��ӳ�
		damage *= 2;
		cout << "Ӣ�۵����������˱���Ч�����˺��ӱ����˺�ֵ" << damage<< endl;
	}
	if (isHold) {

		cout << "Ӣ�۵����������˶���Ч��������ֹͣ����һ�غ�"  << endl;
	}

	if (addHp > 0) {

		cout << "Ӣ�۵�������������ѪЧ����Ӣ�����ӵ�Ѫ��" << addHp << endl;
		
	}

	// ���ù����Ѫ��
	monster->is_Hold = isHold;

	// ����������ʵ���˺�
	int trueDamage = (damage - monster->m_Def) > 0 ? damage - monster->m_Def : 1;
	monster->m_Hp -= trueDamage;
	this->m_Hp += addHp;

	cout << "Ӣ��" << this->m_HeroName << "������" << monster->m_MonsterName << ",�����"
		<< trueDamage << "�˺�" << endl;
}
