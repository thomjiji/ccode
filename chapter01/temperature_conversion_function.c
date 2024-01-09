#include <stdio.h>

float ftoc(int f);

/*
 * print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300;
 * floating-point version + function version.
 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of temperature table
    upper = 300; // upper limit
    step = 20;   // step size

    fahr = lower;
    printf("F\tC\n");
    while (fahr <= upper)
    {
        printf("%3.0f %6.1f\n", fahr, ftoc(fahr));
        fahr = fahr + step;
    }
}

float ftoc(int f)
{
    float celsius = (5.0 / 9.0) * (f - 32.0);
    return celsius;
}
