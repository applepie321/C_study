#include <stdio.h>

void main()
{
	int input = 0, num = 0;

	printf("입력진수 결정 <1>10 <2>16 <3>8 : \n", input);
	scanf("%d", &input);

	if (input == 1)
	{
		printf("값 입력 : \n", num);
		scanf("%d", &num);

		printf("10진수 ==> %d \n", num);
		printf("16진수 ==> %x \n", num);
		printf("8진수 ==> %o \n", num);
	}

	else if (input == 2)
	{
		printf("값 입력 : %d \n", num);
		scanf("%x", &num);

		printf("10진수 ==> %d \n", num);
		printf("16진수 ==> %x \n", num);
		printf("8진수 ==> %o \n", num);
	}

	else if (input == 3)
	{
		printf("값 입력 : %d \n", num);
		scanf("%o", &num);

		printf("10진수 ==> %d \n", num);
		printf("16진수 ==> %x \n", num);
		printf("8진수 ==> %o \n", num);
	}
}