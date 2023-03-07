// strtok3.c

//strtok() dividindo strings em linguagem C (youtube)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char texto[50]="Fulano de tal, Rua X, 123, Centro, Cidade Y";
    char *t;
    
    t= strtok(texto,",");
    
    printf("%s\n",t);
    while(texto != NULL){
        printf("%s\n",t);
        t= strtok(NULL,",");

// a função do NULL no strtok é limpar a primeira informação que é "fulano de tal" e continua com o próximo token, que é 
// "Rua X",depois limpa "Rua X", e vai para "123" e assim por diante.

// esse segundo strtok no NULL pega a string do primeiro strtok que é "texto".
    }
    return 0;
}
