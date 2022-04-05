#include<stdio.h>
#include<Windows.h>

int _start() {
	printf("게임을 시작합니다.\n");
	printf("\n");
	system("pause");
	system("cls");

	printf("-----------게임 설명-----------\n");
	printf("당신의 포켓몬으로 1단계 ~ 5단계의 적 포켓몬을 무찌르세요\n");
	printf("포켓몬의 체력은 각 단계가 끝나면 원상복구 됩니다.\n");
	printf("\n");
	system("pause");
	system("cls");

	printf("포켓볼은 총 2번 사용 가능합니다.\n");
	printf("포켓볼은 적 포켓몬의 체력이 80%%이하로 떨어졌을 시 사용이 가능하고 70%%확률로 포획에 성공합니다.\n\n");
	printf("포획에 성공하면 해당 단계는 클리어 됩니다.\n");
	system("pause");
	system("cls");

	printf("필살기는 스택 2가 필요합니다.\n");
	system("pause");
	system("cls");

	printf("이제 게임을 시작합니다.\n");
	return 0;
}
