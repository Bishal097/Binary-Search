#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,n,mid,l,h,flag=0,x;
    printf("enter the array length:\n");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    l=0;
    h=n-1;
     printf("enter the searched element:\n");
    scanf("%d",&x);
    while(l<=h)
    {
        mid=(l+h)/2;
        if(x>a[mid])
           {
              l=mid-1;
           }
            else if(x<a[mid])
            {
                h=mid+1;
            }
            else
            {
                flag=1;
                break;

            }
    }
    if(flag==1)
    {
        printf("found at midh");
    }
    else
    {
        printf("not found");
    }
}
