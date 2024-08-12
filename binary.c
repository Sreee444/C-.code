#include<stdio.h>
void main()
{
    int i,j,n,a[100],mid,x,flag=0;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the  elements");
    for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
    printf("Enter the elements to search");
    scanf("%d",&x);
    int left=0;
    int right=n-1;
    while (left<=right)
    {
     mid=(left + right)/2;
     if (a[mid]==x)
      {
        flag=1;
        break;
      }
     else if( x> a[mid] )
      {
         left=mid+1;
      }
     else if (x< a[mid])
      {
        right=mid-1;
      }
    }
    if(flag==1)
    {
      printf("The element is found");
    }
    else
    {
      printf("The element is not found");
    }
   
}