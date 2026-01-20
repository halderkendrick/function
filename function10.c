#include<stdio.h>

int sq(int num){
    return num*num;
}

int main(){
    int num;
    scanf("%d", &num);
    int result = sq(num);
    printf("Square = %d", result);
    return 0;
}
