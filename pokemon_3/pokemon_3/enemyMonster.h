#include<stdio.h>
#include <time.h>
#include <stdlib.h>

class enemyMonster
{
public:
	int HP;
	int attack;

	int _enemyMonster_HP(int round) 
	{
		switch (round)
		{
		case 1:
			HP = 150;
			return HP;
			break;

		case 2:
			HP = 250;
			return HP;
			break;

		case 3:
			HP = 350;
			return HP;
			break;

		case 4:
			HP = 450;
			return HP;
			break;

		case 5:
			HP = 550;
			return HP;
			break;

		}
	}

	int _enemyMonster_Attack(int round) 
	{
		switch (round)
		{
		case 1: 
		{
			printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.\n");
			attack = 70;
			return attack;
			break; 
		}

		case 2:
		{
			int skill = 0;
			skill = rand() % 2 + 1;
			switch (skill)
			{
			case 1:
				printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.\n");
				attack = 70;
				return attack;
				break;

			case 2:
				printf("�� ���Ͱ� �����⸦ ����߽��ϴ�.\n");
				attack = 70;
				return attack;
				break;
			}
		}
		case 3:
		{
			int skill = 0;
			skill = rand() % 3 + 1;
			switch (skill) {
			case 1:
				printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.\n");
				attack = 70;
				return attack;
				break;

			case 2:
				printf("�� ���Ͱ� �����⸦ ����߽��ϴ�.\n");
				attack = 70;
				return attack;
				break;

			case 3:
				printf("�� ���Ͱ� ����̵��� ����߽��ϴ�.\n");
				attack = 100;
				return attack;
				break;
			}
		}

		case 4:
		{
			int skill = 0;
			skill = rand() % 4 + 1;
			switch (skill) {
			case 1:
				printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.\n");
				attack = 70;
				return attack;
				break;

			case 2:
				printf("�� ���Ͱ� �����⸦ ����߽��ϴ�.\n");
				attack = 70;
				return attack;
				break;

			case 3:
				printf("�� ���Ͱ� ����̵��� ����߽��ϴ�.\n");
				attack = 100;
				return attack;
				break;

			case 4:
				printf("�� ���Ͱ� ���⸦ ����߽��ϴ�.\n");
				break;
			}
		}
		case 5:
		{
			int skill = 0;
			skill = rand() % 5 + 1;
			switch (skill) {
			case 1:
				printf("�� ���Ͱ� �����ġ�⸦ ����߽��ϴ�.\n");
				attack = 70;
				return attack;
				break;

			case 2:
				printf("�� ���Ͱ� �����⸦ ����߽��ϴ�.\n");
				attack = 70;
				return attack;
				break;

			case 3:
				printf("�� ���Ͱ� ����̵��� ����߽��ϴ�.\n");
				attack = 100;
				return attack;
				break;

			case 4:
				printf("�� ���Ͱ� ���⸦ ����߽��ϴ�.\n");
				break;

			case 5:
				printf("�� ���Ͱ� �ʻ��(�Ұ���)�� ����߽��ϴ�.\n");
				attack = 150;
				return attack;
				break;

			}
		}
		}
	}
};
