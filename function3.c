#include <stdio.h>

void gre_les_equ(int num1, int num2) {
    if(num1 > num2){
        printf("%d is greater than %d", num1, num2);
    }
    else if(num1 < num2){
        printf("%d is less than %d", num1, num2);
    }
    else if(num1 == num2){
        printf("%d is equal to %d", num1, num2);
    }
}

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    gre_les_equ(num1, num2);
    return 0;
}
