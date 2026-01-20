#include<stdio.h>

void calculatePower(double base, double exp){
    double result = pow(base, exp);
    printf("%.2lf", result);
}

int main(){
    double base, exp;
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter Exponent: ");
    scanf("%lf", &exp);
    calculatePower(base, exp);
    return 0;
}
