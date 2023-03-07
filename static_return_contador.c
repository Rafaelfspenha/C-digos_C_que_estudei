// static_return_contador.c
///*
#include <stdio.h>
#include <stdlib.h>

int Contador();

int main()
{
    printf("Contador1: %d \n",Contador()); // 1
    printf("Contador2: %d \n",Contador()); // 2
    printf("Contador3: %d \n",Contador()); // 3

    return 0;
}

int Contador()
{
    static int cont;
    return (++cont);
}

//*/

/*
#include <stdio.h>
#include <stdlib.h>

int Contador();

int main()
{
    printf("Contador1: %d \n",Contador()); // 1
    printf("Contador2: %d \n",Contador()); // 2
    printf("Contador3: %d \n",Contador()); // 3

    return 0;
}

int cont=0;

int Contador()
{
    return (++cont);
}
*/


/*
#include <stdio.h>
#include <stdlib.h>

int Contador();

int main()
{
    printf("Contador1: %d \n",Contador()); // 1
    printf("Contador2: %d \n",Contador()); // 1
    printf("Contador3: %d \n",Contador()); // 1

    return 0;
}

int Contador()
{
    int cont=0;
    return (++cont);
}
*/


