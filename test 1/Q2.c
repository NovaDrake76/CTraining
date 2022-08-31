// Conversor de temperaturas

// user inputs temperature and scale, then the program show it in all scales (Celsius, Fahrenheit and Kelvin)

#include <stdio.h>

int main()
{
    float temp;
    char scale;
    scanf("%f %c", &temp, &scale);
    if (scale == 'C')
    {
        printf("Celsius: %.2f\n", temp);
        printf("Farenheit: %.2f\n", temp * 1.8 + 32);
        printf("Kelvin: %.2f\n", temp + 273.15);
    }
    else if (scale == 'F')
    {
        printf("Celsius: %.2f\n", (temp - 32) / 1.8);
        printf("Farenheit: %.2f\n", temp);
        printf("Kelvin: %.2f\n", (temp - 32) / 1.8 + 273.15);
    }
    else if (scale == 'K')
    {
        printf("Celsius: %.2f\n", temp - 273.15);
        printf("Farenheit: %.2f\n", (temp - 273.15) * 1.8 + 32);
        printf("Kelvin: %.2f\n", temp);
    }
    return 0;
}