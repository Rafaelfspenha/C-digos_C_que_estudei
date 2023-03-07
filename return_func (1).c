// return_func.c
#include <stdio.h>

int func() {

    // void dentro dos parênteses da
    // função da erro.
    
    printf("Func\n");
    
}

int main(void) {
    func(1,2,3);
    // não dá erro colocar valores, mas
    // eles não serão lidos.
    return 0;
}

