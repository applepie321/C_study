#include <stdio.h>

void main()
{
	int input = 0, num = 0;

	printf("�Է����� ���� <1>10 <2>16 <3>8 : \n", input);
	scanf_s("%d", &input);

	if (input == 1)
	{
		printf("�� �Է� : \n", num);
		scanf_s("%d", &num);

		printf("10���� ==> %d \n", num);
		printf("16���� ==> %x \n", num);
		printf("8���� ==> %o \n", num);
	}

	else if (input == 2)
	{
		printf("�� �Է� : %d \n", num);
		scanf_s("%x", &num);

		printf("10���� ==> %d \n", num);
		printf("16���� ==> %x \n", num);
		printf("8���� ==> %o \n", num);
	}

	else if (input == 3)
	{
		printf("�� �Է� : %d \n", num);
		scanf_s("%o", &num);

		printf("10���� ==> %d \n", num);
		printf("16���� ==> %x \n", num);
		printf("8���� ==> %o \n", num);
	}
}