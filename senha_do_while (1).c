// senha_do_while.c 
#include <stdio.h>
int main() {
    int senha,senhaValida=123456;
    
    do{
    
        printf("Digite a senha: ");
        scanf("%d",&senha);
        
        if(senha != senhaValida)
            printf("\nSenha Inválida!\n\n");
            
    }while(senha != senhaValida);
    
    printf("\nAcesso Permitido!\n");
   
    return 0;
}