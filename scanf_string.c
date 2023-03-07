// scanf_string.c
int main(){

    char palavra[100];
    
    printf("Digite uma string: ");
    scanf("%100[^\n]", palavra);
    printf("\n%s\n\n", palavra);

    printf("%p\n", palavra);
    printf("%p\n", &palavra);
    printf("%p\n", &palavra[0]);

    return 0;
}