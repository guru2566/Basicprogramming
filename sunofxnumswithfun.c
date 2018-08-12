#include <stdio.h>
int sum(int n,int a[])
{
    int x=0;
  for(int i=0;i<n;i++)
  {
        x=a[i]+x;
  }
  return x;
}
int main()
{
    int a[100],n,x;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    x = sum(n,a);
    printf("Sum of %d numbers are %d",n,x);
    return 0;
}
