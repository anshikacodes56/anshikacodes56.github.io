#include <stdio.h>
int main() 
{
    char Operator; 
    float NUMBER1, NUMBER2;
  
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &Operator); 

    printf("Enter two operands: ");
    scanf("%f %f", &NUMBER1, &NUMBER2);

    switch (Operator) 
    {
        case '+':
            // Using %f for full float outputs
            printf("%f + %f = %f\n", NUMBER1, NUMBER2, NUMBER1 + NUMBER2);
            break;
        case '-':
            printf("%f - %f = %f\n", NUMBER1, NUMBER2, NUMBER1 - NUMBER2);
            break;
        case '*':
            printf("%f * %f = %f\n", NUMBER1, NUMBER2, NUMBER1 * NUMBER2);
            break;
        case '/':
            if (NUMBER2 != 0) 
            {
                printf("%f / %f = %f\n", NUMBER1, NUMBER2, NUMBER1 / NUMBER2);
            } 
            else 
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error! The operator you entered is not valid.\n");
    }
    
    return 0;
}
