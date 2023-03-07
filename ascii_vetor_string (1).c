// ascii_vetor_string.c
#include <stdio.h>

int main(){

  char hello_world[] = { 'a', 'l', 'o', 32, 109, 117, 110, 100, 111, 33, 10, 0 };

  char a='b';

  printf("%s\n", hello_world);

    printf("%c\n", hello_world[0]);
    printf("%d\n", hello_world[0]);
    printf("%c\n", hello_world[4]);


  printf("\n%d\n",a);

  printf("\n%c\n",102);

  return 0;
}