#include <stdio.h>
#include <stdlib.h> //random, srand �Լ�
#include <time.h> //time �Լ�

//��� VS ��ǻ�� �� �Լ�
int _comVShu(int hu, int com) {

	if (hu == com) {
		printf("�����ϴ�.\n");
		return 0;
	}

	else if (com > (hu + 1) % 3) {
		printf("�̰���ϴ�.\n");
		return 1;
	}

	else {
		printf("�����ϴ�.\n");
		return -1;
	}
	
}

//���ӸӴ� ���
int _result_money(int hu_money, int com_money,int baeting, int vs_result) {
	if (vs_result == 0)
		printf("������� ���� ���ӸӴϴ� %d�� �Դϴ�.\n", hu_money);

	else if (vs_result > 0) {
		hu_money += baeting;
		printf("������� ���� ���ӸӴϴ� %d�� �Դϴ�.\n", hu_money);
	}
	else if (vs_result < 0) {
		hu_money -= baeting;
		printf("������� ���� ���ӸӴϴ� %d�� �Դϴ�.\n", hu_money);
	}
	return hu_money;
}

int main() {
	//���ӸӴ� ����
	int Game_money;
	printf("���ӸӴϸ� �����ϼ���: ");
	scanf("%d", &Game_money);
	int Hu_game_money = Game_money;
	int Com_game_money = Game_money;

	while (true) {

		//���ñݾ� ����
		int Baeting_money;
		printf("---------------------------------------\n");
		printf("�ݾ��� �����ϼ���:");
		scanf("%d", &Baeting_money);

		printf("����(1), ����(2), ��(3)�� �ϳ��� �Է��Ͻÿ�:\n");

		//��ǻ���� ���������� ���� ���
		srand(time(NULL));
		int com_RPS;
		com_RPS = rand() % 3 + 1;

		//��� ���������� �Է�
		int hu_RPS;
		scanf("%d", &hu_RPS);

		//�Լ��� �̿��� ���, ���ӸӴ� ���
		int Vs_result;
		Vs_result = _comVShu(hu_RPS, com_RPS);

		//���ӸӴ� ���
		int Money_result;
		Money_result = _result_money(Hu_game_money, Com_game_money, Baeting_money, Vs_result);
		Hu_game_money = Money_result;
		Com_game_money = (Game_money * 2) - Hu_game_money;

		if (Hu_game_money <= 0 || Com_game_money <= 0) {
			break;
		}
	}

	return 0;
}
