// idade_altura_alunos.c
#include <stdio.h>
int main(){
    
    float a,f=0;
    int i,c,d=0,e=0,g=0;
    
    for(c=1;c<=5;c++){
        printf("Altura do Aluno %d? ",c);
        scanf("%f",&a);
        printf("Idade do Aluno %d? ",c);
        scanf("%d",&i);
        
        if(a < 1.70){
            d+=i;
            e++;
        }
        
        if(i > 20){
            f+=a;
            g++;
        }
    }
    
    printf("\nA idade média dos alunos com menos de 1.70m de altura: %d\n",d/e);
    
    printf("\nAltura média dos alunos com mais de 20 anos: %.2f",f/g);
    
    // f/g float/int
    return 0;
}