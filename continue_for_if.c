// continue_for_if.c
#include <stdio.h>
int main() {
    int i;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
        printf("a\n");
        if(i==5)
            continue;
        printf("b\n");
    }
    return 0;
}