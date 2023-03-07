// questoes_com_Ponteiro.c
#include <stdio.h>

int main(){

    int p,i,l,*n,x;
    int a,b,c,d,e;
    
    
    while(d != 0){

        printf("Digite um número: ");
        scanf("%d",&d);
 
        b=1;
        c=0;
    
        printf("\n");

        while(c<(d-1)){
            a=d+(-d+b);
            c+=a;
            b++;
        }
    
        e=d-c;
    
        if(e > 0){
            printf("%d",e);
        }
    
        printf("\n");
    
        n=&d;
    
        i=1;
        l=0;
    
        while(l<(*n-1)){
            p=*n+((-(*n))+i);
            printf("%d\n",p);
            l+=p;
            i++;
        }
    
        x=*n-l;
  
        printf("\nTotal: %d\n\n",l+x);
    
        printf("================================\n\n");
    
    }
    return 0;
}