#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    char *op;
    op=argv[1];
    int a = atoi(argv[2]);
    int b = atoi(argv[3]);
    // printf("%d",a);
    // printf("%d",b);
    // printf("%s",op);

    if (strcmp(op, "sum")==0)
    {
        printf("%d + %d = %d", a, b, a + b);
    }
    else if (strcmp(op, "subtract")==0)
    {
        printf("%d - %d = %d", a, b, a - b);
    }
    else if (strcmp(op, "product")==0)
    {
        printf("%d X %d = %d", a, b, a * b);
    }
    else if (strcmp(op, "divide")==0)
    {
        printf("%d / %d = %d", a, b, a / b);
    }
    else
    {
        printf("NOT A VALID OPERATOR!!\n");
    }
    // for (int i = 0; i < argc; i++)
    // {
    //     printf("%s\n",argv[i]);
    // }

    return 0;
}
