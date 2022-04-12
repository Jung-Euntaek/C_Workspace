#include <stdio.h>
int main_printfscanf(void)
{
	/*int age = 12; // 처음 변수 타입 선언 후에는 해당 변수에 대한 타입 선언 불필요
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/

	// 실수형 변수에 대한 예제
	//float f = 46.5f; // 숫자 뒤에 f 추가
	//printf("%.2f\n", f);
	//double d = 4.428;
	//printf("%.2lf\n", d);

	//const int YEAR = 2000; // 상수 : 값 변경 불가
	//printf("태어난 년도 : %d\n", YEAR);
	
	// printf
	// 연산
	//int add = 3 + 7;
	//printf("3 + 7 = %d\n", add);
	/*printf("%d x %d = %d\n", 30, 79, 30 * 79);*/

	// scanf
	// 키보드 입력 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);
	printf("입력값 : %d\n", input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	// 문자(한 글자), 문자열(여러 글자)
	/*char c = 'A'; // 작은 따옴표로 적어야함
	printf("%c\n", c);*/
	
	//char str[256];
	//scanf_s("%s", str, sizeof(str)); // 문자열은 & 필요 X
	//printf("%s\n", str);

	// 프로젝트
	// 경찰곤이 범죄자의 정보 입수 (조서 작성)
	// 이름? 나이? 몸무게? 키? 죄목?
	char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇 살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg 이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇 cm 이에요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	// 조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf(" 이름     : %s\n", name);
	printf(" 나이     : %d\n", age);
	printf(" 몸무게   : %.2f\n", weight);
	printf(" 키       : %.2f\n", height);
	printf(" 범죄     : %s\n", what);

	return 0;
}