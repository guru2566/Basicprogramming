#include<stdio.h>
float add(float a,float b)
{
  float x;
  x=a+b;
  return x;
  
}
int main()
{
  float a,b,x;
  scanf("%f\n%f",&a,&b);
  x=add(a,b);
  printf("%f + %f = %f",a,b,x);
  return 0;
 }
