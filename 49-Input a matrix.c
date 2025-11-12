//program in C to input a matrix from the user and display it
#include <stdio.h>
int main() 
{
    int matrix[10][10];
    int m,n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);
    printf("\nEnter elements of the matrix:\n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe entered matrix is:\n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

