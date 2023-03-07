// ponteiro_funcao_fo_while_if_else_return.c
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

void push(int i);
int pop(void);
int *tos, *p1, stack[SIZE];

void main (void) {

    int value;

    tos = stack; /* faz tos conter o topo da pilha */ 
    p1 = stack; /* inicializa p1 */
    
    printf("p1: %x\n\n",&p1);
    printf("p1: %d\n\n",p1);
    printf("p1+1: %d\n\n",p1+1);
    //printf("p1--: %d\n\n",p1--); // diminuir a quantidade de bytes do int(4 bytes)
    printf("*(p1+1): %d\n\n",*(p1+1));
    
    printf("*stack: %d\n\n",*stack);
    printf("*tos: %d\n\n",*tos);
    printf("stack: %d\n\n",stack);
    printf("tos: %d\n\n",tos);
    printf("&tos: %d\n\n",&tos);
    printf ("tos+SIZE: %d\n\n",tos+SIZE); // aumenta em 200, 50*4(4 bytes de int)
    printf("============\n\n");
    
do {

    printf("Digite o valor: ");
    scanf ("%d", &value);

    if (value!=0) {
        push(value);
    }else{
         printf("valor do topo é %d\n", pop());
     }

} while (value!= -1);

}



void push(int i) {

p1++;
printf("p1++: %d\n\n",p1);

if (p1==(tos+SIZE)) {

printf("Estouro da pilha");
    exit (1);
}
    *p1 = i;
    printf("*p1: %d\n\n",*p1);
}



pop (void) {

p1++;
printf("p1: %d\n\n",p1);


if(p1==tos) {

printf("Estouro da pilha");
    exit(1);
}


p1--;
printf("p1: %d\n\n",p1);

return *(p1+1);

}