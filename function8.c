#include<stdio.h>

void sum(int num1, int num2){

    printf("Sum = %d \n", num1+num2);

}

void sub(int num1, int num2){

    printf("Sub = %d \n", num1-num2);

}

void mul(int num1, int num2){

    printf("Mul = %d \n", num1*num2);

}

void div(int num1, int num2){

    printf("Div = %d \n", num1/num2);

}

int main(){

    sum(5, 6);

    sub(9, 5);

    mul(6, 8);

    div(35, 7);

    return 0;
}
