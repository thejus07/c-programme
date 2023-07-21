#include <stdio.h>
#define row 3
#define col 3
int main()
{

    int mat[row][col] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}
                        };

    int tra[col][row];
    int res[row][row]={0};
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            tra[j][i]=mat[i][j];
        }
    }
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<row;j++)
        {
            for (int k=0;k<col;k++)
            {
                res[i][j]+= mat[i][k]*tra[k][j];
            }
        }
    }
    printf("Original matrix:\n");
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose matrix:\n");
    for (int i=0;i<col;i++)
    {
        for (int j=0;j<row;j++)
        {
            printf("%d ",tra[i][j]);
        }
        printf("\n");
    }
    printf("\nResult matrix:\n");
    for (int i=0;i<row;i++)
    {
        for (int j=0;j<row;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

}
