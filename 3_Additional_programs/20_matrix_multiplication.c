/* 
This program performs matrix multiplication.
It prompts the user to enter the dimensions and elements of two matrices,
checks if multiplication is possible, and then computes and displays the resultant matrix.
 */

#include <stdio.h>

int main() 
{
    int m, n, p, q;

    // Input dimensions of the matrices
    printf("Enter the number of rows & columns of the 1st matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows & columns of the 2nd matrix:\n");
    scanf("%d%d", &p, &q);

    if (n != p) 
    {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    int i, j, k,M1[m][n], M2[p][q], R[m][q]; //2D arrays for matrices

    // Input for first matrix
    printf("Enter elements of 1st Matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &M1[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements of 2nd Matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &M2[i][j]);
        }
    }
    // Displaying the first matrix  
    printf("1st Matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",M1[i][j]);
        }
        printf("\n");
    }
    

    // Displaying the second matrix
    printf("2nd Matrix is:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d ",M2[i][j]);
        }
        printf("\n");
    }

    // Matrix multiplication logic
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            R[i][j] = 0;
            for (k = 0; k < n; k++) 
                R[i][j] += M1[i][k] * M2[k][j];
        }
    }

    // Output the result
    printf("Resultant Matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
