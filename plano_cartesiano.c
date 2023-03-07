// plano_cartesiano.c
#include <stdio.h>
int main(){

    int x,y;
    
    do{
        printf("\nDigite a coordenada (x): ");
        scanf("%d",&x);
        printf("Digite a coordenada (y): ");
        scanf("%d",&y);
        
        if(x!=0 && y!= 0){
            if(x>0 && y<0)
                printf("\n%d,%d está localizado no 1° quadrante.\n",x,y);
            else if(x>0 && y>0)
                printf("\n%d,%d está localizado no 2° quadrante.\n",x,y);
            else if(x<0 && y<0)
                printf("\n%d,%d está localizado no 3° quadrante.\n",x,y);
            else
                printf("\n%d,%d está localizado no 4° quadrante.\n",x,y);
        }
    }while(x!=0 && y!=0);
    
    return 0;
};

    