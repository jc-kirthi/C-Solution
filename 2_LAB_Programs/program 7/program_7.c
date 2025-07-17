/*
Title: Design and Develop a c program using functions to implement string operations such as compare, concatenate, string, length. Do not use string handling functions.  
Problem Description: The program should prompt the user to input two strings and perform the specified operations accordingly.  
Method: Use parameter passing techniques, and strings. 
*/ 


#include<stdio.h>

//Prototype of string functions
int strlength(char s[50]);
void strconcat(char s1[50],char s2[50]); 
void strcomp(char s1[10], char s2[10]);

int main()
{
    char s1[50],s2[50];
    int length1,length2; 
    printf("Enter the source string 1:"); 
    gets(s1); 
    printf("Enter the source string 2: ");
    gets(s2); 
    length1=strlength(s1); 
    length2=strlength(s2);
    printf("string length of string 1 is %d\n",length1); 
    printf("string length of string 2 is %d\n",length2);
    strconcat(s1,s2);
    strcomp(s1,s2);
}

//3 user defined functions

//Function to find the length of the string
int strlength(char s1[50])
{
    int i=0;
    while(s1[i]!='\0')
        i++;
    return i;
}

//Function to concatenate two strings
void strconcat(char s1[50],char s2[50])
{
    char s3[100]; //new string to store the concatenation string
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        s3[i]=s1[i]; //copying the first string to the new string
        i++;
    }
    //space between two strings
    s3[i]=' '; 
    i++;

    while(s2[j]!='\0')
    {
        s3[i+j]=s2[j]; // copying the second string to the new string
        j++;
    }
    s3[i+j]='\0'; // null character at the end of the string
    printf("string concatenation : %s\n",s3);
}

//Function to compare two strings
void strcomp(char s1[10], char s2[10])
{
    int i=0;
    while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0') 
        i++;
    if(s1[i]=='\0' && s2[i]=='\0') 
        printf("strings are same");
    else
        printf("strings are different");
}