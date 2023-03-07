// 5_valores_quantidade_positivos_negativos_com_if.c
#include <stdio.h>
int main(){

    int a,b,c,d,e,positivo=0,negativo=0;
    
    printf("Digite 5 números: \n\n");
    printf("1° número: ");
    scanf("%d",&a);
    printf("2° número: ");
    scanf("%d",&b);
    printf("3° número: ");
    scanf("%d",&c);
    printf("4° número: ");
    scanf("%d",&d);
    printf("5° número: ");
    scanf("%d",&e);
    
    if(a > 0)
        positivo++;
    if(a < 0)
        negativo++;
    if(b > 0)
        positivo++;
    if(b < 0)
        negativo++;
    if(c > 0){
        positivo++;
    if(c < 0){
        negativo++;
    if(d > 0){
        positivo++;
    if(d < 0){
        negativo++;
    if(e > 0){
        positivo++;
    if(e < 0){
        negativo++;
    
    printf("\nPositivo(s): %d\nNegativo(s): %d\n", positivo,negativo);
    
    return 0;
}