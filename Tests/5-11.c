#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op) {
        case '+':
            printf("%d %c %d = %d 입니다.", num1, op, num2, num1 + num2);
            break;
        case '-':
            printf("%d %c %d = %d 입니다.", num1, op, num2, num1 - num2);
            break;
        case '*':
            printf("%d %c %d = %d 입니다.", num1, op, num2, num1 * num2);
            break;
        case '/':
            printf("%d %c %d = %.4f 입니다.", num1, op, num2, (float)num1 / (float)num2);
            break;
        case '%':
            printf("%d %c %d = %d 입니다.", num1, op, num2, num1 % num2);
            break;
        default:
            printf("연산자를 잘못 입력했습니다.");
            break;
    }

    return 0;
}