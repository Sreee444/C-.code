#include<stdio.h>
void main()
{
    int i,j,n,a[100],x,temp;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the  elements");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     for(i=1;i<n;i++)
     {
        temp= a[i];
        j=i-1;
      while (j>=0 && temp < a[j])
      {
         a[j+1] = a[j];
         j--;

      }
      a[j+1]=temp;
     }
    printf("the sorted elements is");
    for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
}