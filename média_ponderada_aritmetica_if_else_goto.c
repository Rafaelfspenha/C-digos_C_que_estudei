// média_ponderada_aritmetica_if_else_goto.c
#include <stdio.h>
int main(){
    float nota1,nota2,nota3;
    char escolha;
    
    printf("Qual a média desejada?\na - aritmética\np - ponderada\n"); 
    scanf("%c",&escolha);
    
    if(escolha != 'a' && escolha != 'p')
        goto avancar;
    
    printf("\n\nDigite 3 notas\n");
    printf("\nDigite a 1° nota:\n");
    scanf("%f",&nota1);
    printf("\nDigite a 2° nota:\n");
    scanf("%f",&nota2);
    printf("\nDigite a 3° nota:\n");
    scanf("%f",&nota3);
        
    if(escolha=='a')
        printf("\nMédia Aritmética: %.2f\n",(nota1+nota2+nota3)/3);
    else{ 
        if(escolha=='p'){
            printf("\n%.2f * 3 = %.2f\n",nota1,nota1*3);
            printf("%.2f * 3 = %.2f\n",nota2,nota2*3);
            printf("%.2f * 4 = %.2f\n",nota3,nota3*4);
            printf("\n(%.2f + %.2f + %.2f) / 10 = %.2f\n",nota1*3,nota2*3,nota3*4,(nota1*3+nota2*3+nota3*4)/10); 
            printf("\nMédia Ponderada: %.2f\n",(nota1*3+nota2*3+nota3*4)/10);
        }
     }
    
    avancar:
    
    return 0;
}