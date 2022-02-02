#include<stdio.h>
int input_array_size()
{
  int a;
  printf("ENTER THE SIZE OF NUMBER\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n,int a[n])
{
  printf("ENTER THE NUMBERS\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }

}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;

}
void out_put(int n,int a[n],int sum)
{
  for(int i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d\n",a[n-1],sum);
}
int main()
{
  int x,sum;
  x=input_array_size();
  int a[x];
  input_array(x,a);
  sum=sum_n_arrays(x,a);
  out_put(x,a,sum);
  return 0;

}

