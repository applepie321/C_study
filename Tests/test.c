#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0;
    char op[30];
    
    
    printf("수식을 한줄로 띄어쓰기로 입력하세요 : \n");
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