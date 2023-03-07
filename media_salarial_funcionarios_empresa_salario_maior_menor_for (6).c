// media_salarial_funcionarios_empresa_salario_maior_menor_for.c
#include <stdio.h>
int main(){
    int x,y,b=0,d;
    float a=0,z[100],c[100],e=0,f;
    
    printf("Digite a quantidade de funcionários da empresa: ");
    scanf("%d",&x);
    
    for(y=1;y<=x;y++){
        printf("\nfuncionário %d: ",y);
        scanf("%f",&z[y]);
        a+=z[y];
        c[y]=z[y];
        b++;
    }
    
    printf("\n\nA média salarial é %.2f\n\n",a/b);
    
    
    for(d=1;d<=x;d++){
        
        if(e<=c[d] || e<=c[d+1]){
            if(c[d]>c[d+1])
                e=c[d];
            
            if(c[d+1]>c[d])
                e=c[d+1];  
            
        }     
    }
    
    f=e;
    
    for(d=1;d<=x;d++){
        c[x+1]=e;
        if(f>=c[d] || f>c[d+1]){
            if(c[d]<c[d+1])
                f=c[d];
            
            if(c[d+1]<c[d])
                f=c[d+1];  
            
        }     
    }
    
    printf("\n\nO maior salário é %.2f\n\n",e);
    printf("\nO menor salário é %.2f\n\n",f);
    
    return 0;
}
