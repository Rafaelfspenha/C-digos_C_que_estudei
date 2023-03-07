// calloc_scanf.c
#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int num=0,x,*vector;
    
    printf("Ingrese la cantadas de valores a cargar: \n");
    scanf("%d",&num);
    if (num <= 0) {
        printf("Valor ingresado menor o igual a cero\n");
        exit(1);
    }
    
    vector = calloc(num,sizeof(int));
    if (vector == NULL) {
        printf("No se pudo reservar memoria\n");
        exit(1);
    }
    
    printf("Carga de valores:\n");
    for (x=0;x<num;x++) {
        scanf("%d",&vector[x]);
    }
    
    printf("Valores cargados:\n");
    for (x=0;x<num;x++) {
        printf("%d\n",vector[x]);
    }
    
    free(vector);
    
    exit(0);

    return 0;
}