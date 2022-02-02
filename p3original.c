#include<stdio.h>
int input_n()
{
  int n;
  printf("ENTER THE NUMBER\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
  for(int i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d\n",n,sum);
}
int main()
{
  int x,sum;
  x=input_n();
  sum=sum_n(x);
  output(x,sum);
  return 0;
}

