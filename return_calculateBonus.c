/*
// return_calculateBonus.c
#include <stdio.h>

int calculateBonus(int yearsWorked);

int main() {
    int buckyBonus = calculateBonus(14);
    int emmaBonus = calculateBonus(3);
    
    printf("Bucky gets $%d \n",buckyBonus);
    printf("Emma gets $%d \n",emmaBonus);
    
    return 0;
}

int calculateBonus(int yearsWorked) {
    int bonus = yearsWorked*250;
    
    if(yearsWorked > 10){
        bonus+=1000;
    }
    return bonus;
}
*/

// Código simplificado

#include <stdio.h>

int calculateBonus(int yearsWorked);

int main() {
    printf("Bucky gets $%d \n", calculateBonus(14));
    printf("Emma gets $%d \n",calculateBonus(3));
    
    return 0;
}

int calculateBonus(int yearsWorked) {
    int bonus = yearsWorked*250;
    
    if(yearsWorked > 10){
        bonus+=1000;
    }
    return bonus;
}