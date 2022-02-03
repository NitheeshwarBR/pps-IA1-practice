#include<stdio.h>
int input()
{
  int x;
  printf("ENTER THE NUMBER\n");
  scanf("%d",&x);
  return x;
}
int cmp(int a,int b,int c)
{
  if(a>b&&a>c)
  {
    return a;
  }
  else if(b>c)
  {
    return b;
  }
  else{
    return c;
  }
}
void output(int a,int b,int c,int largest)
{
  if(largest==a)
  {
    printf("%d is larger than %d and %d\n",a,b,c);
  }
  else if(largest==b)
  {
    printf("%d is larger than %d and %d\n",b,a,c);
  }
  else{
    printf("%d is larger than %d and %d\n",c,a,b);
  }
}
int main()
{
  int a,b,c,compare;
  a=input();
  b=input();
  c=input();
  compare=cmp(a,b,c);
  output(a,b,c,compare);
  return 0;
}
