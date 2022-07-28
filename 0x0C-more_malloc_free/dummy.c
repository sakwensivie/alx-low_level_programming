#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char num1[] = "21b";
    char num2[] = "54y";

    int number1, number2;

    number1 = strtol(num1, NULL, 10);
    number2 = strtol(num2, NULL, 10);

    printf("%d \t %d", number1, number2 );

    return 0;


}
