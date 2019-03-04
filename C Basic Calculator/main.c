#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1); /* & used as address for 1st variable, %lf we need to scan for a decimal number. */
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1 + num2); /*Prints num1 +num2, %d can be used when searching for an integer*/

    return 0;
}
