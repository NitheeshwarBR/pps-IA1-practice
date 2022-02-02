#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("ENTER THE NUMBER\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float sqrt_result;
  float x =n/6;
  sqrt_result=0.5*(x+(n/x));
  while(fabs(sqrt_result-x)>0.000001)
  {
    x=sqrt_result;
     sqrt_result=0.5*(x+(n/x));
  }
  return sqrt_result;
}
void output(float n,float sqrt_result)
{
  printf("sqruare root of %f is %f\n",n,sqrt_result);
}
int main()
{
  float x,result;
  x=input();
  result=my_sqrt(x);
  output(x,result);
  return 0;
}