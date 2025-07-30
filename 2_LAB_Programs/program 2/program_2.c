/*
Title: Design and Develop a C program to compute the roots of a quadratic equation by accepting the coefficients. Print appropriate messages.
Problem Description: The program should prompt the user to input the coefficients 'a', 'b' and 'c' of the quadratic equation. Then, apply the formula to calculate the roots.
Method: else-if ladder.
*/

#include<stdio.h>
#include<stdlib.h>//exit() is used to terminate the program.
#include<math.h> //sqrt() and fabs() are used to calculate the square root and absolute value of the argument respectively.

int main()
{
    float a, b, c, d=0, root1,root2, real, imag;
    
    //input
    printf("Enter the three coefficients:\n");
    scanf("%f%f%f",&a,&b,&c);

    if(a==0) 
    {
        printf("Invalid Coefficients");
        exit(0);
    }

    //discriminant
    d = (b * b) - (4 * a * c); // b^2 - 4ac
    
    if(d > 0)
    {
        root1= (-b + (sqrt(d))) / (2.0 * a); //sqrt() is used to calculate the square root of the argument.
        root2 = (-b - (sqrt(d))) / (2.0 * a);
        printf("The roots are real and distinct... \n");
        printf("root1=%f \nroot2 = %f\n",root1,root2);
    }

    else if(d==0) 
    {
        root1= root2 = -b / (2.0 * a);
        printf("\nThe roots are real and equal....");
        printf("\nroot1 = %f\nroot2 = %f\n",root1, root2);
    }

    else
    {
        real = -b / (2.0 * a);
        imag = sqrt(fabs(d))/ (2.0 * a); //fabs() is used to return the absolute value of the argument because we can't have negative value inisde sqrt().
        printf("\nThe roots are complex and imaginary....");
        printf("\nroot1 = %f + i%f\nroot2 = %f - i%f",real, imag,real, imag);
    }
    return 0;
}
