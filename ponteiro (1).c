// ponteiro.c
int main(){

    char letra = 'f';
    char *p;

    p = &letra;
    
    // ponteiro é uma variável que guarda 
    // um endereço de memória.

    printf("Valor de letra (letra): %c\n", letra);
    printf("Endereco de letra (&letra): %p\n", &letra);
    
// variável*p

    printf("\np = &letra\n");

    // particular de p
    printf("\nEndereco de p (&p): %p\n", &p);
    
    // copiado de letra
    printf("\nValor apontado por p (*p): %c\n", *p);
    printf("Valor de p (p): %p\n", p);   
    

    return 0;
}