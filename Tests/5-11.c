#include <stdio.h>
#include <string.h>

int main()
{
    int a = 0, b = 0;
    char op[30];
    
    
    printf("������ ���ٷ� ����� �Է��ϼ��� : \n");
    scanf("%s", op);
    char * token = strtok(op, " ");
    
    a = atoi(&op[0]);
    b = atoi(&op[2]);
    
    if(op[1]=='+')
    {
        printf("%d + %d", a, b);
    }
    else
        if(op[1]=='-')
	{
	printf("%d - %d", a, b);
    }
        
	else
	    if(op[1]=='*')
	    {
	    printf("%d * %d", a, b);
            else
		printf("%d / %d", a, b);
	    }

}