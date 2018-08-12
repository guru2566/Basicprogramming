#include<stdio.h>
int compare(int a,int b,int c)
{
    if(a>b&&a>c)
    {
        if(b>c)
            return printf("%d > %d > %d",a,b,c);
        if(c>b)
            return printf("%d > %d > %d",a,c,b);
        else 
            return printf("%d > %d",a,b);
    }
    else if(b>a&&b>c)
    {
        if(a>c)
            return printf("%d > %d > %d",b,a,c);
        if(c>a)
            return printf("%d > %d > %d",b,c,a);
        else 
            return printf("%d > %d",b,a);
    }
    else if(c>a&&c>b)
    {
        if(a>b)
            return printf("%d > %d > %d",c,a,b);
        if(b>a)
            return printf("%d > %d > %d",c,b,a);
        else 
            return printf("%d > %d",c,a);
    }
    else 
       return printf("All 3 The Entered Elements are Same that is %d",a);
}
int main()
{
  int a,b,c,x;
  scanf("%d\n%d\n%d",&a,&b,&c);
  x=compare(a,b,c);
  return 0;
  
 }
