/*
Title: Write a C program that copy the contents of the source file to the target file.
Problem Description: The program asks the user for the source and target text file names. The contents are copied from the source to the target file character by character. 
Method: File Input/Output.
*/

#include <stdio.h>

int main() 
{
    FILE *sourceFile, *targetFile;
    char sourcePath[100], targetPath[100];
    char ch;

    // Get the source file path from the user
    printf("Enter the source file path: ");
    scanf("%s", sourcePath);

    // Get the target file path from the user
    printf("Enter the target file path: ");
    scanf("%s", targetPath);

    // Open the source file in read mode
    sourceFile = fopen(sourcePath, "r");

    // Check if the source file exists
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        return 0;
    }

    // Open the target file in write mode
    targetFile = fopen(targetPath, "w");

    // Check if the target file exists
    if (targetFile == NULL) {
        printf("Unable to open target file.\n");
        fclose(sourceFile);
        return 0;
    }

    // Copy contents from source file to target file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("File is copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
