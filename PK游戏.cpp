#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "hero.h"
#include "Monster.h"
#include "Weapon.h"
#include "Knife.h"
#include "DragonSword.h"

void play() {
	// ��������
	Monster * monster = new Monster;
	// ����Ӣ��
	Hero *hero = new Hero;

	// ��������
	Weapon *knife = new Knife;
	Weapon *dragonSword = new DragonSword;
	 
	// ���û��Լ�ѡ������
	cout << "��ѡ������" << endl;
	cout << "1.���ֿ�ȭ" << endl;
	cout << "2.С��" << endl;
	cout << "3.������" << endl;


	int oper;

	cin >> oper;

	switch (oper)
	{
	case 1:
		cout << "���ֿ�ȭ��" << endl;
		break;
	case 2:
		hero->equipWeapon(knife);
		break;
	case 3:
		hero->equipWeapon(dragonSword);
		break;
	default:
		cout << "������������" << endl;
		break;
	}

	getchar(); // ���뻺�������лس�  ����Ҫ��ȡһ��Enter����ֵ
	int round = 1;

	while (true)
	{
		getchar();

		system("cls");
		cout << "-------��ǰ�ǵ�"<< round<< " �غ�" << endl;


		if (hero->m_Hp < 0 ) {
			cout << "Ӣ��" <<hero->m_HeroName<<"�ҵ��ˣ���Ϸ����" << endl;
			break;
		}

		hero->attckMonster(monster);
		if (monster->m_Hp < 0) {
			cout << "����" << monster->m_MonsterName<< "�ҵ��ˣ���Ϸͨ��" << endl;
			break;
		}

		monster->attackHero(hero);

		if (hero->m_Hp < 0) {
			cout << "Ӣ��" << hero->m_HeroName << "�ҵ��ˣ���Ϸ����" << endl;
			break;
		}

		cout << "Ӣ��ʣ��Ѫ��"<< hero->m_Hp << endl;
		cout << "����ʣ��Ѫ��" << monster->m_Hp << endl;
		round++;

	}

	delete monster;
	delete hero;
	delete knife;
	delete dragonSword;

}





int main()
{


	play();
	system("pause");
	return EXIT_SUCCESS;
}