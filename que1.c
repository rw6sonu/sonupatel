#include<stdio.h>
#include<math.h>
int main()
{
    float celsius,fahrenheit;

    printf("enter the temperature in Celsius:");
    scanf("%f",&celsius);
    fahrenheit=(9/5*celsius)+32;
    printf("%.2f celsius= %.2f fahrenheit",celsius,fahrenheit);

}

