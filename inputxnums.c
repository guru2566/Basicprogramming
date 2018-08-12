#include<stdio.h>
int num(int n)
{
    int a[100];
    for(int i=0;i<n;i++)
    {
        return scanf("%d",&a[i]);    
    }
}
int main()
{
    int n,x;
    printf("Enter the number of elements to be entered");
    scanf("%d\n",&n);
    x=num(n);
    return 0;
}
