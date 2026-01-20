#include <stdio.h>

void area(double base, double height)
{
    double result = 0.5 * base * height;
    printf("Area = %.2lf\n", result);
}

int main()
{
    double base, height;

    scanf("%lf %lf", &base, &height);
    area(base, height);

    return 0;
}
