#include <stdio.h>

void main()
{
	int input, num;

	printf("입력진수 결정 <1>10 <2>16 <3>8 : %d \n", input);
	scanf_s("%d", &input);

	printf("값 입력 : %d \n", num);
	scanf_s("%d", &num);

	printf("10진수 ==> %d \n", num);
	printf("16진수 ==> %x \n", num);
	printf("8진수 ==> %o \n", num);

}