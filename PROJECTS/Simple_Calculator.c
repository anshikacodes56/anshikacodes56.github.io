#include <stdio.h>
int main() 
{
    char Operator; 
    int NUMBER1, NUMBER2;
  
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &Operator); 

    printf("Enter two operands: ");
    scanf("%d %d", &NUMBER1, &NUMBER2);

    switch (Operator) 
    {
        case '+':
            // Using %f for full float outputs
            printf("%d + %d = %d\n", NUMBER1, NUMBER2, NUMBER1 + NUMBER2);
            break;
        case '-':
            printf("%d - %d = %d\n", NUMBER1, NUMBER2, NUMBER1 - NUMBER2);
            break;
        case '*':
            printf("%d * %d = %d\n", NUMBER1, NUMBER2, NUMBER1 * NUMBER2);
            break;
        case '/':
            if (NUMBER2 != 0) 
            {
                printf("%d / %d = %d\n", NUMBER1, NUMBER2, NUMBER1 / NUMBER2);
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
