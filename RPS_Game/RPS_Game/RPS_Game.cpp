#include <stdio.h>
#include <stdlib.h> //random, srand �Լ�
#include <time.h> //time �Լ�

//��� ���� ���� ���� ����
int turn = 0;
int record_size = 100;
int* com_RPS_record = (int*)malloc(sizeof(int) * record_size);

//��� VS ��ǻ�� �� �Լ�
int _comVShu(int hu, int com) {

	if (hu == com) {
		printf("��ǻ�� : %d \n", com);
		printf("�����ϴ�.\n");
		return 0;
	}

	else if ((hu == 1 && com == 2) || (hu == 2 && com == 3) || (hu == 3 && com == 1)) {
		printf("��ǻ�� : %d \n", com);
		printf("�����ϴ�.\n");
		return 1;
	}

	else {
		printf("��ǻ�� : %d \n", com);
		printf("�̰���ϴ�.\n");
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

//��ǻ�� ��� ���
int _com_record(int com_record) {


	//��ǻ�Ͱ� �� ���������� ��� ����, �迭 �ʱ�ȭ
	for (int i = 0; i < record_size; i++) {
		com_RPS_record[i] = 0;
	}
	com_RPS_record[turn] = com_record;

	for (int i = 0; i < record_size; i++) {
		printf("%d", com_RPS_record[i]);
	}

	free(com_RPS_record);

	turn++;

	return *com_RPS_record;
}

int main() {
	//���ӸӴ� ����
	int Game_money;
	printf("���ӸӴϸ� �����ϼ���: ");
	scanf("%d", &Game_money);
	//�Է¹��� ���ӸӴϸ� ����ڿ� ��ǻ�;ְ� ������
	int Hu_game_money = Game_money;
	int Com_game_money = Game_money;
	int record = 0;

	while (true) {
		
		//���ñݾ� ����
		int Baeting_money;
		printf("\n---------------------------------------\n");
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
		
		//����ڿ� ��ǻ�� ���ӸӴ� ��� �� ����
		Hu_game_money = Money_result;
		Com_game_money = (Game_money * 2) - Hu_game_money;

		record = _com_record(com_RPS);
		printf("%d",record);
		
		//���� �Ѹ��̶� 0���� �ȴٸ� ���� ����
		if (Hu_game_money <= 0 || Com_game_money <= 0) {
			break;
		}

	}

	return 0;
}
