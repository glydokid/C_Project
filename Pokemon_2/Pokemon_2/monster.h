#include <stdio.h>
#include<windows.h>

int pokeball = 2;

int _monster_HP() {
	int HP = 500;

	return HP;
}

int _monster_attack() {
	int stack = 0;
	int attack = 0;
	while (1) {
		printf("\n");
		printf("공격을 선택하세요\n");
		printf("1. 불공격(필살기 공격력 170/ 2스택 필요)\n");
		printf("2. 할퀴기(공경력 100)\n");
		printf("3. 막기(피해 무력화)\n");
		printf("4. 몬스터볼 (포획 성공시 승리)\n");

		int skill = 0;
		scanf("%d", &skill);

		if (skill == 1 && stack == 2) {
			system("cls");
			printf("불공격(필살기)을 사용합니다.\n");
			attack = 170;
			stack++;
			break;
		}
		else if (skill == 1 && stack < 2) {
			system("cls");
			printf("!!!!!아직 필살기 스택이 쌓이지 않았습니다.!!!!!\n");
		}
		else if (skill == 2) {
			system("cls");
			printf("할퀴기 공격을 사용합니다.\n");
			stack++;
			attack = 100;
			break;
		}
		else if (skill == 3) {
			system("cls");
			printf("막기를 사용합니다.\n");
			printf("상대의 공격을 무력화 합니다.\n");
			stack++;
			break;
		}
		else if (skill == 4) {
			system("cls");
			printf("포켓볼을 사용합니다.\n");
			int pokeball_per = rand() % 100;

			if (pokeball_per >= 70) {
				printf("포획에 실패하였습니다.\n");
				printf("포켓볼 -1\n");
				system("cls");
				pokeball -= 1;

				printf("남은 포켓볼은 %d개입니다.", pokeball);
			}
			else if (pokeball_per <= 69) {
				printf("포획에 성공하였습니다.\n");
				printf("포켓볼 -1\n");
				system("cls");
				pokeball -= 1;
				 

				printf("남은 포켓볼은 %d개입니다.", pokeball);
			}
			break;
		}
		else {
			system("cls");
			printf("잘못 입력하셨습니다.\n");
		}
	}

	return attack;
}