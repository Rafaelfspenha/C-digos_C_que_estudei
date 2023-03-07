// argc_argv2.c
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i;
    printf("\nArgc: %d\n\n",argc);
    for (i=0;i < argc; i++)
    {
        printf("arg[%d]: %s\n",i,argv[i]);
    }
    printf("\n");
    return 0;
}
~
~
~