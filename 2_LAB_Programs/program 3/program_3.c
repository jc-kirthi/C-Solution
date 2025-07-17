/*
Title: Design and Develop a C program for an electricity board to calculate charges based on electricity usage. The program should prompt the user to input their name and the number of units consumed.  
Problem Description: Using a tiered pricing structure, calculate the charges as follows: 
• For the first 200 units, charge 80 paise per unit 
• For the next 100 units (201 to 300), charge 90 paise per unit. 
• Beyond 300 units, charge Rs 1 per unit. 
Additionally, apply a minimum meter charge of Rs. 100 to all users. If the total amount exceeds Rs 400, include a 15% surcharge. Display the user's name and the total charges incurred, accounting for the surcharge if applicable. 
Method: else-if ladder.  
 */

#include <stdio.h> 

int main()
{
    char name[20]; 
    int units;
    float rupees;
    
    //input
    printf("\n Enter the name of the user :");
    gets(name); // gets() is used to read a string from the user. 
    printf("\n Enter number of units consumed :"); 
    scanf("%d",&units);

    //slab rates
    if(units<=200)
        rupees=units*0.80+100; 
    else if(units<=300 && units>200)
        rupees=(200*0.80)+(units-200)*0.90+100;
    else
        rupees=(200*0.80)+(100*0.90)+(units-300)*1.00+100; 

    if(rupees>400)
        rupees+= 0.15*rupees; //shorthand operator for rupees=rupees+0.15*rupees

printf("%s has to pay rupees %f",name,rupees);
return 0;
}

