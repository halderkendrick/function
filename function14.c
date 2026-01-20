
#include <stdio.h>

void display(int num[]){
    for(int i = 0; i < 10; i++){
    printf("%d \n", num[i]);
    }
}

int main() {
    int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    display(num);

    return 0;
}
