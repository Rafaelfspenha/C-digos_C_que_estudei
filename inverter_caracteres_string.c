// inverter_caracteres_string.c
#include<stdio.h>

#include<conio.h>

#include<string.h>

int main(){

    char str1[50],str2[50];

    int cont1,cont2;

    printf("Digite seu nome: ");

    gets(str1);

    cont2 = strlen(str1) - 1 ;

    for(cont1 = 0; cont1 < strlen(str1);cont1++)

    {

        str2[cont2] = str1[cont1];

        cont2--;

    }

        printf("%s\n",str2);
    
    return 0;
}

