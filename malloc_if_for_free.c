// malloc_if_for_free.c
#include <stdio.h>
int main() {
    int *arr;
    int n;
    
    printf("Type array size: ");
    scanf("%d",&n);
    
    arr=(int *) malloc(n*sizeof(int));

// a função malloc retorna NULL se não
// conseguiu alcançar memória solicitada.

    if (!arr) {
        printf("Not possible to create memory for this array\n");
        return 1;
    }
    
    
    for (int i=0;i < n; i++) {
        arr[i]=i;
        // arr[i]= i+1; // começa com 1
    }
    
    printf("\n");
    
    for (int i=0;i < n; i++) {
        printf("%d\n",arr[i]);
    }




    /*
    printf("\n");
    
    for (int i=0;i < n; i++) {
        printf("%d\n",i);
    }
    
    */
    
    free(arr);
    // liberar memória alocada
    // para se utilizar em outro recurso.
    
    return 0;
}