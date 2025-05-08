#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the celsius:");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5)+35;
    printf("%2.f celsius = %2.f fahrenheit", celsius, fahrenheit);
    return 0;
}