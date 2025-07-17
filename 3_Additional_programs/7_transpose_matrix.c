/*
This program transposes a given matrix.
It reads the dimensions and elements of the matrix from the user,
then computes and displays the transposed matrix.
*/

#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],m,n,i,j; // 2D arrays are taken

    // Input the size of the matrix
    printf("Enter row & column size:\n");
    scanf("%d%d",&m,&n); 
    printf("Enter the elements:\n");
    for(i=0; i<m;i++)   
    {
        for(j=0; j<n;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Display the original matrix
    printf("\nEntered Matrix: \n");
    for(i=0; i<m; i++)   
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("%d\t ", a[i][j]);   
        }
    }
    printf("\n");

    // Transpose the matrix
    for(i=0; i<n;i++)  
    {
        for(j=0; j<m; j++) 
        {
            b[i][j] = a[j][i];
        }                        
    }
    

    printf("\ntransposed Matrix: \n");
    for(i=0; i<m; i++)   
    {
        printf("\n");
        for(j=0; j<n; j++)
        {
            printf("%d\t ", b[i][j]);   
        }
    }

    return 0;
}