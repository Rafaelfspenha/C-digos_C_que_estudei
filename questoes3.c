// questoes3.c
#include <stdio.h>

int main(){

    int p,i,l,n,x;
    int a,b,c,e;
    const int d;
    
    
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
    
        i=1;
        l=0;
    
        while(l<(d-1)){
            p=d+(-d+i);
            printf("%d\n",p);
            l+=p;
            i++;
        }
    
        x=d-l;
  
        printf("\nTotal: %d\n\n",l+x);
    
        printf("================================\n\n");
    
    }
    return 0;
}