// return_func
#include <stdio.h>

int func() {
    printf("Func\n");
}

int main(void) {
    func(1,2,3);
    return 0;
}

// dá erro
/*

#include <stdio.h>

int func(void) {
    printf("Func\n");
}

int main(void) {
    func(1,2,3);
    return 0;
}

*/