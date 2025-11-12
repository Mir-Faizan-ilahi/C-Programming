//program in C to find transpose of a matrix
#include <stdio.h>

int main() 
{
    int a[10][10], t[10][10];
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter elements of the matrix:\n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            scanf("%d", &a[i][j]);
        }
    }

    // Find transpose
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            t[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the matrix:\n");
    for(i = 0; i < n; i++) 
	{
        for(j = 0; j < m; j++) 
		{
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}

