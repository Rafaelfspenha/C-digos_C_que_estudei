// strstr.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
char *string = "Esta frase contem muitas palavras a ser procurada.";
char *substring = "palav"; //é a string que desejamos procurar.
char *ptr; //é um ponteiro que irá armazenar o início da substring.

ptr = strstr(string, substring); 

//localiza o início da "palavra" 
// dentro da string e imprime o
// resto do texto.

printf("A substring é: %s\n", ptr);
}