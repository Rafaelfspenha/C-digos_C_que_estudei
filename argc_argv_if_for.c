// argc_argv_if_for.c
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[])
{
    int i, sum=0;
    printf("argc = %d\n",argc);
    printf("Let's see what is in arg[]\n");
    if(argc>1)
    {
        for(i = 1; i < argc;i++)
        {
            printf("arg[%d] = %s\n", i, argv[i]);
            sum += atoi(argv[i]);
        }
        printf("Total = %d\n", sum);
    }
}