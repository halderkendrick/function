#include <stdio.h>

void odd_even(int num) {
    if(num%2 == 0){
        printf("even");
    }
    else if(num%2 != 0){
        printf("odd");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    odd_even(num);
    return 0;
}
