#include<stdio.h>

int sq(int num1){
    return num1*num1;
}

int main(){
    int num1;
    scanf("%d", &num1);
    printf("Square = %d", sq(num1));
    return 0;
}
