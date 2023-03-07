// multiplicar_com_for.c
#include <stdio.h>
int main(){
    int i,a,b,r=0;
    
    printf("Digite 2 números\n\n");
    printf("1° número: ");
    scanf("%d",&a);
    printf("2° número: ");
    scanf("%d",&b);
    
    for(i=1;i<=a;i++)
        r+=b;
       
    printf("\n%d * %d = %d\n",a,b,r);
    
    return 0;
}