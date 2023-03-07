// escolher_dia_da_semana_enum_switch_funcao.c
#include <stdio.h>

enum days {sunday=1,monday, tuesday, wednesday,thursday, friday,saturday};

void escolhaDia(int *d)
{
    printf("Inserir número do dia da semana de 1 a 7: ");
    scanf("%d",d);
    printf("\n");
}

void imprimeDia(int d) 
{

    switch(d)
    {
        case sunday:
            printf("Dia de Hoje: Domingo");
            break;
            
        case monday:
            printf("Dia de hoje: Segunda");
            break;
        
        case tuesday:
            printf("Dia de hoje: Terça");
            break;
            
        case wednesday:
            printf("Dia de hoje: Quarta");
            break;
            
        case thursday:
            printf("Dia de hoje: Quinta");
            break;
            
        case friday:
            printf("Dia de hoje: Sexta");
            break;
            
        case saturday:
            printf("Dia de hoje: Sábado");
            break;
            
        default:
            printf("Dado Incorreto!");
    }
}



int main() {

    enum days d;
    
    escolhaDia(&d);
    imprimeDia(d);
   
    printf("\n");
    
    return 0;
}