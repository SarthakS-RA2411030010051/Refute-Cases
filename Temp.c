#include <stdio.h>
int main()
{
    //Declare variables
    float temp;
    char unit;
    float tempF, tempK, tempC;
    //Prompt the user to enter a temperature and a unit of temperature
    printf("Enter a temperature: ");
    scanf("%f", &temp);
    printf("Enter a unit of temperature (C, F, K): ");
    scanf(" %c", &unit);
    //Convert the temperature to the other two units of temperature
    if (unit == 'C')
    {
        tempC = temp;
        tempF = temp * 9 / 5 + 32;
        tempK = temp + 273.15;
    }
    else if (unit == 'F')
    {
        tempC = (temp - 32) * 5 / 9;
        tempF = temp;
        tempK = temp + 273.15;
    }
    else if (unit == 'K')
    {
        tempC = temp - 273.15;
        tempF = (tempC * 9 / 5) + 32;
        tempK = temp;
    }
    //Display the converted temperatures
    printf("Temperature in Celsius: %.2f\n", tempC);
    printf("Temperature in Fahrenheit: %.2f\n", tempF);
    printf("Temperature in Kelvin: %.2f\n", tempK);
    return 0;
}