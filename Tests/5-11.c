#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("������ ���ٷ� ����� �Է��ϼ��� : ");
    scanf("%d %c %d", &num1, &op, &num2);

    switch (op) {
        case '+':
            printf("%d %c %d = %d �Դϴ�.", num1, op, num2, num1 + num2);
            break;
        case '-':
            printf("%d %c %d = %d �Դϴ�.", num1, op, num2, num1 - num2);
            break;
        case '*':
            printf("%d %c %d = %d �Դϴ�.", num1, op, num2, num1 * num2);
            break;
        case '/':
            printf("%d %c %d = %.4f �Դϴ�.", num1, op, num2, (float)num1 / (float)num2);
            break;
        case '%':
            printf("%d %c %d = %d �Դϴ�.", num1, op, num2, num1 % num2);
            break;
        default:
            printf("�����ڸ� �߸� �Է��߽��ϴ�.");
            break;
    }

    return 0;
}