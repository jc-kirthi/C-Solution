/* 
This program demonstrates the use of nested structures in C.
It defines an employee structure that contains a name and an address structure.
The address structure contains a city and a pin code.
 */

#include<stdio.h>
// Define the structure for address
struct employee
{
    char name[20];
    struct address // Define the nested structure for address
    {
        char city[20];
        int pin;
    }add;
}emp;

int main(){

    //input
    printf("Enter your name: ");
    scanf("%s",emp.name);
    printf("Enter your city: ");
    scanf("%s", emp.add.city);
    printf("Eneter  the pin: ");
    scanf("%d",&emp.add.pin);

    //output
    printf("\nName: %s\n",emp.name);
    printf("City: %s\n",emp.add.city);
    printf("Pin: %d",emp.add.pin);
}