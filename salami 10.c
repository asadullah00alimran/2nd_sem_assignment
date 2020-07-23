#include<stdio.h>

int main()

{
    int temperature_in_fahrenheit;
    float temperature_in_centigrade;

    printf("Enter temperature in fahrenheit = ");
    scanf("%d",&temperature_in_fahrenheit);

   temperature_in_centigrade = (float) (temperature_in_fahrenheit - 32)*5/9;
   printf("\nTemperature in Celsius = %.2f C\n",temperature_in_centigrade);

   return 0;
}


