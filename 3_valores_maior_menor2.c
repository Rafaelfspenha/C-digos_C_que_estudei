// 3_valores_maior_menor.c
#include <stdio.h>
int main(){

    int a,b,c,maior,menor;
    
    printf("Digite 3 números: \n\n");
    printf("1° número: ");
    scanf("%d",&a);
    printf("2° número: ");
    scanf("%d",&b);
    printf("3° número: ");
    scanf("%d",&c);
    
    if(a < b){
        if(a < c)
            menor=a;
        else
            menor=c;
    }
    else{
        if(b < c)
            menor=b;
        else
            menor=c;
    }
    
    
    if(a > b){
        if(a > c)
            maior=a;
        else
            maior=c;
    }
    else{
        if(b>c)
            maior=b;
        else
            maior=c;
    }
    
    printf("\nMaior: %d\nMenor: %d\n",maior, menor);
    
    return 0;
}