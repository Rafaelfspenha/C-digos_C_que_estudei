// media_notas.c
#include <stdio.h>
int main(){
int cont;
float nota,total;
total=0;
for (cont=1;cont<=4;cont++) {
    printf("Digite a nota do %d° bimestre: ",cont);
    scanf("%f",&nota);
    total=total+nota;
}
printf("\nNota média: %.f\n",total/4);
return 0;
}