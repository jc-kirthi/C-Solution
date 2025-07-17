/*
Title: Design and Develop a C program to implement structures to read, write, compute average- marks and the students scoring above and below the average marks for a class of N students.
Problem Description: The program should prompt the user to input details for each student, such as their name and marks for different subjects. Then, it should calculate the average marks for the entire class and identify students who scored above and below this average. 
Method: Use Structures in C. 
*/

#include <stdio.h> 
//structure definitaion
struct student
{
	int rollno;
	char name[20]; 
	float marks;
};

int main()
{
int i,n;
struct student s[10];//array of structure 
float sum=0,average;

//input
printf("Enter the number of student details:"); 
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("student %d:\n",i+1);
    printf("Enter roll number: "); 
    scanf("%d",&s[i].rollno);        
    printf("Enter student name: "); 
    scanf("%s",s[i].name);  //no & is used for string         
    printf("Enter the marks: "); 
    scanf("%f",&s[i].marks);
    printf("\n");
}

//display
printf("\nEntered Student details are:\n\n"); 
printf("Rollno\t\tName\t\tMarks\n"); 
for(i=0;i<n;i++)
    printf("%d\t\t%s\t\t%f\n",s[i].rollno,s[i].name,s[i].marks); 

for(i=0;i<n;i++)
    sum+=s[i].marks;

average=sum/n;
printf("\nAVERAGE of the marks=%f\n\n",average);

//printf("students scoring above average\n");
for(i=0;i<n;i++)
{
    if(s[i].marks>=average)
	    printf("%s has scored above average \n",s[i].name);
	else
	    printf("\n%s has scored below average ",s[i].name);
}

return 0;
}