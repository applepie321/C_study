#include <stdio.h>

void main()
{
	int input, num;

	printf("�Է����� ���� <1>10 <2>16 <3>8 : %d \n", input);
	scanf_s("%d", &input);

	printf("�� �Է� : %d \n", num);
	scanf_s("%d", &num);

	printf("10���� ==> %d \n", num);
	printf("16���� ==> %x \n", num);
	printf("8���� ==> %o \n", num);

}