#include <stdio.h>
#include <time.h>

// ����� 6����
// �縷���� ���� �� ����
// ���� ���� ���׿� �� �ֱ�
// �ð��� �������� �� ���� ����

int level;
int arrayFish[6];
int * cursor;

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

int main_pointer_project(void)
{
	long startTime = 0; // ���� ���� �ð�(long ���� type ����)
	long totalElapsedTime = 0; // �� ��� �ð�
	long prevElapsedTime = 0; // ���� ��� �ð� (�ֱٿ� �� �� �ð� ����)

	int num; // �� �� ���׿� �� �� ������. ����� �Է�
	initData();

	cursor = arrayFish; // ������ ������ array�� �����ϰ� ��� ����

	startTime = clock(); // ���� �ð� ms ���� ��ȯ
	while (1)
	{
		printFishes();
		printf("�� �� ���׿� ���� �ֽðھ��? ");
		scanf_s("%d", &num);

		// �Է°� üũ
		if (num < 1 || num > 6)
		{
			printf("�Է°��� �߸��Ǿ����ϴ�");
			continue;
		}

		// �� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; // CLOCKS_PER_SEC : ms �� s(��)�� ��ȯ(/1000)
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);

		// ���� �� �� �ð� (���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);
		
		// ���� �� ���� (����)
		decreaseWater(prevElapsedTime);

		// ����ڰ� �Է��� ���׿� �� �ֱ�
		// 1. ������ ���� 0 �̸�? ���� ���� �ʴ´�
		if (cursor[num - 1] <= 0)
		{
			printf("%d �� ������ �̹� �׾����ϴ�.. ���� ���� �ʽ��ϴ�\n", num);
		}
		// 2. ������ ���� 0 �� �ƴ� ���? ���� �ش� ! 100 ���� �ʴ��� Ȯ��
		else if (cursor[num - 1] + 1 <= 100)
		{
			// ���� �ش�
			printf("%d �� ���׿� ���� �ݴϴ�.\n\n", num);
			cursor[num - 1] += 1; // 1��ŭ �� �ֱ�
		}

		// 20�ʸ��� ������
		if (totalElapsedTime / 20 > level - 1) // totalElapsedTime �� int �� �����̹Ƿ� 0.xx == 0���� ����
		{
			level++; // level up
			printf(" *** �� ������ ! ���� %d �������� %d ������ ���׷��̵� ***\n\n", level - 1, level);

			// ���� ���� 5
			if (level == 5)
			{
				printf("\n\n�����մϴ�. �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�\n\n");
				exit(0);
			}
		}

		// ����� �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			printf("��� ����Ⱑ.. �Ф� ����...\n");
			exit(0);
		}
		else
		{
			printf("����Ⱑ ���� ����־��!\n");
		}
		prevElapsedTime = totalElapsedTime;
		// �� �ִ� ���� 10�� -> 15�� (5�� : prevElapsedTime) -> 25�� (10�� : prevElapsedTime)�� �����ؾ� ��
	}
	return 0;
}
void initData()
{
	level = 1; // ���� ���� (1-5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // ������ �� ���� (0-100)
	}
}
void printFishes()
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6); // %3d : ���ڿ� 3ĭ �Ҵ� (�ѱ��� 2ĭ ����)
	for (int i = 0; i < 6; i++)
	{
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // �ð� �带 ������ ������ ����
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
		{
			return 1;
		}
	}
	return 0;
}