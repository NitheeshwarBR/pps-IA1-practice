#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("ENTER THR NUMBER\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float x=n/4;
  float sqrt_result=0.5*(x+(n/x));
  while(fabs(sqrt_result-x)>0.000001)
  {
    x=sqrt_result;
    sqrt_result=0.5*(x+(n/x));
  }
  return sqrt_result;
}
void output(float n,float sqrt_result)
{
  printf("square root of %f = %f \n",n,sqrt_result);
}
int main()
{
  float a,result;
  a=input();
  result=my_sqrt(a);
  output(a,result);
  return 0;
}