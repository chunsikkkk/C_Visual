#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;

	printf("숫자를 입력하링구:");
	scanf("%d", &number);

	if(number % 2 == 0)
		printf("짝수링구링구\n");
    else
		printf("홀수링구링구\n");

	printf("입력된 숫자는 %d링구염\n", number);


	return 0;
}