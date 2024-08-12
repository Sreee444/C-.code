#include<stdio.h>
void main()
{
    int i,j,n,a[100],x,temp,min;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the  elements");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     for(i=0;i<n-1;i++)
     {
       min=i;
       for(j=i+1;j<n;j++)
       {
         if(a[j]<a[min])
         {
            min=j;
         }
       }
       if(min!=i)
       {
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
       }
     }
     printf("the sorted elements is");
    for(i=0;i<n;i++)
     {
        printf("%d",a[i]);
     }
}