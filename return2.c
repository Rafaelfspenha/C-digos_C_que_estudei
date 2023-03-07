// return2.c
#include <stdio.h>

int valor(int a,int b);

int main() {
    printf("%d\n",valor(5,3));
}

int valor(int a,int b) {
    return a+b;
}