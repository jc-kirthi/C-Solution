/*
Title: Design and Develop a C Program using functions to compute Sin(x) using Taylor series approximation. Compare your result with the built- in Library function. Print both the results with appropriate messages. 
Problem Description: The program should prompt the user to input the angle x, then calculate its sine value using the Taylor series expansion.  
Method: do-while loop, user-defined functions. 
*/

/*
sin x function expansion: x - (x^3/3!) + (x^5/5!) - (x^7/7!) + .........
*/

#include<stdio.h>
#include<math.h> //for using sin() function
#define PI 3.142 //defining the value of PI- a macro definition

int main()
{
    int i,deg;
    float x,sum=0,term,nume,deno;
    printf("Enter the value of degree: ");
    scanf("%d",&deg);
    x=deg*(PI/180); //converting degree to radian
    nume=x; 
    deno=1;
    i=2;
    do
    {
        term=nume/deno;
        nume=-nume*x*x;
        deno*=i*(i+1);
        sum+=term; 
        i+=2;
    }
    while(fabs(term)>=0.00001); //fabs() function returns the absolute value of the argument
    printf("\nThe sine of %d is %f\n",deg, sum);
    printf("\nThe sine function of %d is %f using library function", deg, sin(x));
}
