#include<stdio.h>
void main()
{
    int i,j,k,r,c;
    printf("Enter the row of the matrix :\n");
    scanf("%d",&r);
    printf("Enter the column of the matrix :\n");
    scanf("%d",&c);
    int A[r][c],B[100][3];
    printf("Enter the elements :\n");
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
           scanf("%d",&A[i][j]);
         }
     }
    k =1;
    B[0][0] = r;
    B[0][1] = c;
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
            if(A[i][j] != 0)
             {
                B[k][0] = i;
                B[k][1] = j;
                B[k][2] = A[i][j];
                k++;
             }
         }
     }
    B[0][2] = k-1;
    printf("The entered matrix is :\n");
    for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
         {
           printf("%d \t",A[i][j]);
         }printf("\n");
     }
    printf("The Sparse matrix is :\n");
    printf("Rows Columns value \n");
    printf("------------------\n");
    for(i=0;i<k;i++)
     {
        for(j=0;j<3;j++)
         {
           printf("%d \t",B[i][j]);
         }printf("\n");
     }
}