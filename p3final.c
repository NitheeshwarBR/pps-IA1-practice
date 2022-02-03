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
  int a,sum;
  a=input_n();
  sum=sum_n(a);
  output(a,sum);
  return 0;

}