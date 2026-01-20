#include <stdio.h>

void pos_neg_zero(int num) {
    if(num > 0){
        printf("positive");
    }
    else if(num < 0){
        printf("negative");
    }
    else{
        printf("zero");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    pos_neg_zero(num);
    return 0;
}
