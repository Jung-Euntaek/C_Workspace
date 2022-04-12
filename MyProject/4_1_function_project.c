#include <stdio.h>
#include <time.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main_function_project(void)
{
	// 문 5개, 문마다 수식 퀴즈
	// Pass or Fail

	srand(time(NULL));
	int count = 0; // 맞힌 문제 개수
	for (int i = 1; i <= 5; i++)
	{
		int num1 = getRandomNumber(i);
		int num2 = getRandomNumber(i);
		showQuestion(i, num1, num2);

		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1)
		{
			printf("프로그램을 종료합니다\n");
			exit(0); // 프로그램 바로 종료, break는 for 문만 탈출
		}
		else if (answer == num1 * num2)
		{
			// 성공
			success();
			count++;
		}
		else
		{
			// 실패
			fail();
		}
	}

	printf("\n\n 당신은 5개의 비밀번호 중 %d 개를 맞췄습니다", count);

	return 0;
}

int getRandomNumber(int level)
{
	return rand() % (level * 7) + 1;
}

void showQuestion(int level, int num1, int num2)
{
	printf("\n\n\n########## %d 번째 비밀번호 ##########\n", level);
	printf("\n\t%d x %d 는?\n\n", num1, num2);
	printf("#####################################\n");
	printf("\n비밀번호를 입력하세요 (종료 : -1) >> ");
}

void success()
{
	printf("\n >> Good ! 정답입니다 \n");
}

void fail()
{
	printf("\n >> 땡 ! 틀렸습니다 \n");
}