#include<stdio.h>
int add(int a,int b)
{
  int x;
  x=a+b;
  return x;
  
}
int main()
{
  int a,b,x;
  scanf("%d\t%d",&a,&b);
  x=add(a,b);
  printf("%d + %d = %d",a,b,x);
  return 0;
 }
