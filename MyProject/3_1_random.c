#include <time.h>
#include <stdlib.h> // <time.h>�� �߰��ؼ��� �۵� ���� ��
#include <stdio.h>

int main_random(void)
{
	//srand(time(NULL)); // ���� �ʱ�ȭ : �� �ϸ� ���� ���� �ݺ� ���
	//int num = rand() % 3; // �������� ������ ���� ����(0, 1, 2 �� �ϳ�)
	
	printf("���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	srand(time(NULL));
	printf("\n\n���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	return 0;
}
