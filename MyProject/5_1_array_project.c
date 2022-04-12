#include <stdio.h>
#include <time.h>

int main_arrat_project(void)
{
	srand(time(NULL));
	printf("\n\n === �ƺ��� ��Ӹ� ���� === \n\n");
	int answer; // ����� �Է°�
	int treatment = rand() % 4; // �߸��� ���� (0-3)

	int cntShowBottle = 0; // �̹� ���ӿ� ������ �� ����
	int prevCntShowBottle = 0; // �� ���ӿ� ������ �� ����
	// ���� �����ִ� �� ���� �ٸ��� �Ͽ� ����� ���

	// 3���� ��ȸ
	for (int i = 1; i <= 3; i++)
	{
		int bottle[4] = { 0, 0, 0, 0 };
		do {
			cntShowBottle = rand() % 2 + 2; // ������ �� ���� (2-3)
		} while (cntShowBottle == prevCntShowBottle);
		prevCntShowBottle = cntShowBottle;

		int isincluded = 0; // ������ �� �߿� �߸��� ���� ����
		printf(" > %d ��° �õ� : ", i);

		// ������ �� ���� ����
		for (int j = 0; j < cntShowBottle; j++)
		{
			int randBottle = rand() % 4;

			// ���� ���õ��� ���� ���̸�, ���� ó��
			if (bottle[randBottle] == 0)
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment)
				{
					isincluded = 1;
				}
			}
			// �̹� ���õ� ���̸�, �ߺ��̹Ƿ� �ٽ� ����
			else
			{
				j--; // �ش� �ڵ� ������ �ٽ� �������� �ʰ� ���� Ƚ�� ����
			}
		}

		// ����ڿ��� ���� ǥ��
		for (int k = 0; k < 4; k++)
		{
			if (bottle[k] == 1)
			{
				printf("%d ", k + 1);
			}
		}
		printf(" ������ �Ӹ��� �ٸ��ϴ�\n\n");

		if (isincluded == 1)
		{
			printf(" >> ���� ! �Ӹ��� ����� !!\n");
		}
		else
		{
			printf(" >> ���� ! �Ӹ��� ���� �ʾҾ��.. �Ф�\n");
		}

		printf("\n ... ��� �Ϸ��� �ƹ� Ű�� �������� ... ");
		getchar(); // Ű �Է� ������ ���
	}

	printf("\n\n�߸����� �� ���ϱ��? ");
	scanf_s("%d", &answer);

	if (answer == treatment + 1)
	{
		printf("\n >> �����Դϴ� ! \n");
	}
	else
	{
		printf("\n >> �� ! Ʋ�Ⱦ��. ������ %d �Դϴ�\n", treatment + 1);
	}
		
	return 0;
}