// 3_valores_maior_para_o_menor.c
#include <stdio.h>
int main(){

    int a,b,c;
    
    printf("Digite 3 números: \n\n");
    printf("1° número: ");
    scanf("%d",&a);
    printf("2° número: ");
    scanf("%d",&b);
    printf("3° número: ");
    scanf("%d",&c);
    
    
    if (a>b && a>c){
        printf("\n\n%d é o maior valor.\n",a);
        if(b>c){
            printf("\n%d é o segundo maior valor.\n",b);
            printf("\n%d é o terceiro maior valor.\n",c);
        }else{
            printf("\n%d é o segundo maior valor.\n",c);
            printf("\n%d é o terceiro maior valor.\n",b);
        }
    }
    
    
    if (b>a && b>c){
        printf("\n\n%d é o maior valor.\n",b);
        if(a>c){
            printf("\n%d é o segundo maior valor.\n",a);
            printf("\n%d é o terceiro maior valor.\n",c);
        }else{
            printf("\n%d é o segundo maior valor.\n",c);
            printf("\n%d é o terceiro maior valor.\n",a);
        }
    }
    
    
    if (c>a && c>b){
        printf("\n\n%d é o maior valor.\n",c);
        if(a>b){
            printf("\n%d é o segundo maior valor.\n",a);
            printf("\n%d é o terceiro maior valor.\n",b);
        }else{
            printf("\n%d é o segundo maior valor.\n",b);
            printf("\n%d é o terceiro maior valor.\n",a);
        }
    }
 
    
    return 0;
}