/* 
This program takes the marks of a student as input and assigns a grade based on the marks.
The grading system is as follows:
- A+ for marks 90-100
- A for marks 80-89
- B for marks 70-79
- C for marks 60-69
- D for marks 50-59
- E for marks 40-49
- Fail for marks below 40
*/


#include <stdio.h>
int main() 
{
    int marks;

    // Input marks
    printf("Enter your marks (out of 100) to know your grade: ");
    scanf("%d", &marks);

    // Check and assign grade
    if (marks >= 90 && marks <= 100) 
        printf("Grade: A+\n");
    else if (marks >= 80) 
        printf("Grade: A\n");
    else if (marks >= 70)
        printf("Grade: B\n");
    else if (marks >= 60) 
        printf("Grade: C\n");
    else if (marks >= 50) 
        printf("Grade: D\n");
    else if (marks >= 40)
        printf("Grade: E\n");
    else 
        printf("Grade: Fail\n");

    return 0;
}
