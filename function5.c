#include<stdio.h>

int sum(int num1, int num2){
    return num1+num2;
}

int main(){
    int result = sum(5, 6);
    //int num1, num2;
    //scanf("%d %d", &num1, &num2);
    printf("Sum = %d", result);

    return 0;
}
