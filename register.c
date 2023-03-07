// register.c
#include<stdio.h>
int main() {
   int i = 10;
   register int *a = &i;
   printf("The value of pointer : %d", *a);
   getchar();
   return 0;
}