// goto_return_void_getch_static.c
#include <stdio.h>
#include <conio.h>

void Increment ();

main() 
{
    Back : // neste caso o comando foi enviado para cima, repetindo a função
    Increment();
    printf("Back inside the Main function\n\n");
    getch();
    goto Back; // o comando goto serve para ir a alguma linha do programa.
}

void Increment()
{
    // int a= 1; --> iria repetir o 1 infinitamente
    static int a = 1;
    printf("Inside the function a= %d\n",a);
    a++;
}