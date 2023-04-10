#include <stdio.h>

int main(void)
{
    int num1;
    int denom1;
    int num2;
    int denom2;
    int result_num;
    int result_denom;

    printf("First: x/x ");
    scanf("%d/%d", &num1, &denom1);

    printf("Second: y/y");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("Sum = %d/%d\n", result_num, result_denom);

    return 0;

}