// ascii_vetor_string.c
#include <stdio.h>

int main(){

  char hello_world[] = { 'a', 'l', 'o', 32, 109, 117, 110, 100, 111, 33, 10, 0 };

  char a='b';

  printf("%s", hello_world);


  printf("\n%d\n",a);

  printf("\n%c\n",102);

  return 0;
}