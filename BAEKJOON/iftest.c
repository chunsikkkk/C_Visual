#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number;

	printf("���ڸ� �Է��ϸ���:");
	scanf("%d", &number);

	if(number % 2 == 0)
		printf("¦����������\n");
    else
		printf("Ȧ����������\n");

	printf("�Էµ� ���ڴ� %d������\n", number);


	return 0;
}