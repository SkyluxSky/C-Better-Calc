#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;// variables for numbers and operators entered by user
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);// %lf scans for double
    printf("Enter operator: ");
    scanf(" %c", &op);//scanning for a character requires a space before %c
    printf("Enter a number: ");
    scanf("%lf", &num2);// %lf scans for double

    if(op == '+'){//if and else if statements for operators function
        printf("%f", num1 + num2);//'single quotes' define a symbol or character in if statements
    } else if(op == '-'){
        printf("%f", num1 - num2);
    } else if(op == '/'){
        printf("%f", num1 / num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    } else {
        printf("Invalid operator");
    }
    return 0;
}
