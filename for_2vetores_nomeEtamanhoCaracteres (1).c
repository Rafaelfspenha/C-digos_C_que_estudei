// for_2vetores_nomeEtamanhoCaracteres.c
#include <stdio.h>
int main ()
{

//[5][100]
//[nomes][tamanho_strings]

	char strings [5][100];
	int count;

	for (count=0;count<5;count++)
        {
        	printf ("\n\nDigite uma string: ");
        	gets (strings[count]);
        }
        
	printf ("\n\n\nAs strings que voce digitou foram:\n\n");
	
for (count=0;count<5;count++)
                printf ("%s\n",strings[count]);
        return(0);
}