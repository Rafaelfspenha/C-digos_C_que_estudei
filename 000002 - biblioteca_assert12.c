// biblioteca_assert2.c
#define NDEBUG
#include <assert.h>
#include <stdio.h>

void main(){
    int number=1;
    while(number){
        printf("Digite um número: ");
        scanf("%d",&number);
        printf("\n");
        assert(number >= 30 );
    }
}