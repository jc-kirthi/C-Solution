/*
Title: Design and Develop a C program to solve simple computational problems using arithmetic expressions and use of each operator leading to simulation of a commercial calculator.
Problem Description: The program should prompt the user to input an arithmetic expression, the calculator should support the following operators: Addition (+), subtraction (-), Multiplication (*), Division(/) and modulus (%) and also should handle the error such as division by zero , unrecognized operator.
Method: switch Statement.
*/

#include<stdio.h>
#include<stdlib.h>//exit() is used to terminate the program.

int main()
{
    int a, b;
    char op;
    
    //input
    printf("\nEnter a simple arithmetic expression like 5+4:\n");
    scanf("%d %c %d", &a, &op, &b);

    //switch statement
    switch(op)
    {
        case '+': printf("Result= %d",a+b);
        break; //break is used to terminate the switch statement.
        case '-': printf("Result= %d",a-b);
        break;
        case '*': printf("Result= %d",a*b);
        break;
        // quotient
        case '/': if(b!=0) //to avoid division by zero
                        printf("Result= %d",a/b);
                    else
                    {
                        printf("Division by zero is not possible");
                        exit(0); //exit() is used to terminate the program.
                    }  
                break;
        //remainder
        case '%': if(b!=0)
                            printf("Result= %d",a%b);
                    else
                    {
                            printf("Division by zero is not possible");
                            exit(0);
                    }  
                break;
        default: printf("Illegal Operator"); //default is used to handle the error.
    }
    return 0;
}