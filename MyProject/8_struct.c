#include <stdio.h>

// �������� ���� ��ġ
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; // ���� ��ü ����(������ ����)
};

//typedef struct GameInformation {
//	char* name;
//	int year;
//	int price;
//	char* company;
//
//	struct GameInfo* friendGame;
//} GAME_INFO; // GameInformation �� typedef �̿��� GAME_INFO�� ġȯ


typedef struct {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame;
} GAME_INFO; // GameInformation �� ��� �Ұ�, GAME_INFO�� ��� ����

int main_struct(void)
{
	// ���� ���
	// �̸� : ��������
	// �߸ų⵵ : 2017��
	// ���� : 50��
	// ���ۻ� : ����ȸ��

	char* name1 = "��������"; // * name1 : "��������" �̶�� ������ڿ� ����Ű�� ������, name1 �����Ϳ� ���� �Ҵ� X
	int year1 = 2017;
	int price1 = 50;
	char* company1 = "����ȸ��";

	// �ٸ� ����

	char* name2 = "�ʵ�����";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "�ʵ�ȸ��";

	// ����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "��������";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "����ȸ��";

	// ����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("  ���Ӹ�  : %s\n", gameInfo1.name);
	printf("  �߸ų⵵  : %d\n", gameInfo1.year);
	printf("  ����  : %d\n", gameInfo1.price);
	printf("  ���ۻ�  : %s\n", gameInfo1.company);

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = {"�ʵ�����", 2017, 100, "�ʵ�ȸ��"};
	printf("-- �ٸ� ���� ��� ���� --\n");
	printf("  ���Ӹ�  : %s\n", gameInfo2.name);
	printf("  �߸ų⵵  : %d\n", gameInfo2.year);
	printf("  ����  : %d\n", gameInfo2.price);
	printf("  ���ۻ�  : %s\n", gameInfo2.company);

	// ����ü �迭
	struct GameInfo gameArray[2] = {
		{"��������", 2017, 50, "����ȸ��"},
		{"�ʵ�����", 2017, 100, "�ʵ�ȸ��"}
	};
	
	// ����ü ������
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;
	printf("-- �̼Ǹ� ���� ��� ���� --\n");
	/*printf("  ���Ӹ�  : %s\n", (*gamePtr).name);
	printf("  �߸ų⵵  : %d\n", (*gamePtr).year);
	printf("  ����  : %d\n", (*gamePtr).price);
	printf("  ���ۻ�  : %s\n", (*gamePtr).company);*/
	printf("  ���Ӹ�  : %s\n", gamePtr->name); // ������ ������ ȭ��ǥ ��� ����
	printf("  �߸ų⵵  : %d\n", gamePtr->year);
	printf("  ����  : %d\n", gamePtr->price);
	printf("  ���ۻ�  : %s\n", gamePtr->company);

	// ���� ��ü ���� �Ұ�
	gameInfo1.friendGame = &gameInfo2;
	printf("-- ������ü ���� ��� ���� --\n");
	printf("  ���Ӹ�  : %s\n", gameInfo1.friendGame->name);
	printf("  �߸ų⵵  : %d\n", gameInfo1.friendGame->year);
	printf("  ����  : %d\n", gameInfo1.friendGame->price);
	printf("  ���ۻ�  : %s\n", gameInfo1.friendGame->company);

	// typedef
	// �ڷ����� ���� ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; // int i = 3;
	�Ǽ� �Ǽ����� = 3.23f; // float f = 3.23f
	printf("\n\n�������� : %d, �Ǽ����� : %.2f\n\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ۰���";
	game1.year = 2015;

	GAME_INFO game2;
	game2.name = "�ѱ۰���2";

	return 0;
}