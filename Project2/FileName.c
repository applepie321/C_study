#include <stdio.h>
#include <string.h>

int main()
{
    int a = 0, b = 0;
    char op[30];

    printf("������ ���ٷ� ����� �Է��ϼ��� : \n");
    scanf("%s", &op);
    char* token = strtok(op, " ");

    a = atoi(token);
    token = strtok(NULL, " ");
    b = atoi(token);

    if (op[1] == '+')
    {
        printf("%d + %d", a, b);
    }
    else if (op[1] == '-')
    {
        printf("%d - %d", a, b);
    }
    else if (op[1] == '*')
    {
        printf("%d * %d", a, b);
    }
    else
    {
        printf("%d / %d", a, b);
    }

}