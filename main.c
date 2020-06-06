#include <stdio.h>
#include "add.c"
#include "subtract.c"
#include "multiply.c"
#include "divide.c"
#include "mod.c"

int main()
{
    int num1, num2;
    float result;
    
    char choice;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    printf("Choose operation to perform (+,-,*,/,%): ");
    scanf(" %c",&choice);

    result=0;
    switch(choice)    
    {
        case '+':
            result=add(num1,num2);
            break;
             
        case '-':
            result=subtract(num1,num2);
            break;
         
        case '*':
            result=multiply(num1,num2);
            break;
             
        case '/':
            result=divide(num1,num2);
            break;
             
        case '%':
            result=mod(num1,num2);
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("Result: %d %c %d = %f\n",num1,choice,num2,result);
    return 0;
}
