// caracteres_aspas_printf_n_t_FinalizarTexto.c
#include <stdio.h>
int main() {
    printf("Eu sou \nbrasileiro");
    printf("\n\n");
    printf("Eu sou \\n brasileiro");
    printf("\n\n");
    printf("\tEu sou brasileiro\n");
    printf("\n\n");
    printf("\\ imprime uma barra invertida");
    printf("\n\n");
    printf("\" \bimprime aspas duplas");
    printf("\n\n");
    printf("\' imprime aspas \vsimples");
    printf("\n\n");
    printf("aqui finaliza o texto...\0, mas o texto continua");
    printf("\n\n");
    
    // se colocar aspas duplas e simples
    // dentro da string dá erro.
    
    // \ não aparece, sendo necessário \\
    // para aparecer a barra invertida.
    
    return 0;
}