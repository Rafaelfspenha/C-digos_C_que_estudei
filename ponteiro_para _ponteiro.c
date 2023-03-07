/*

          Aula 191: O que é ponteiro para ponteiro?

          Código escrito por Wagner Gaspar
          Maior de 2021
*/

// ponteiro_para _ponteiro.c

int main(){

    int A = 100, *B, **C;

    B = &A;
    C = &B;

    printf("Endereco de A: %p\tConteudo de A: %d\n", &A, A);
    printf("Endereco de B: %p\tConteudo de B: %p\n", &B, B);
    // O conteúdo de B é o endereço de A.
    
    printf("Conteudo apontado por B: %d\n", *B);
    // o conteúdo apontado por B é conteúdo
    // de A

    printf("Endereco de C: %p\tConteudo de C: %p\n", &C, C);
    // O conteúdo de C é o endereço de B.
    
    printf("Conteudo apontado por C: %d\n", **C);
    // o conteúdo apontado por C é conteúdo
    // de A
    return 0;
}