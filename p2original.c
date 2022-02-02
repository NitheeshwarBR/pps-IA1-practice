#include<stdio.h>
int input()
{
  int x;
  printf("ENTER NUMBER\n");
  scanf("%d",&x);
  return x;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
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
    printf("%d is larger than %d and %d\n",b,c,a);
  }
  else{
    printf("%d is larger than %d and %d\n",c,a,b);
  }
}
int main()
{
  int x,y,z,large;
  x=input();
  y=input();
  z=input();
  large=cmp(x,y,z);
  output(x,y,z,large);
  return 0;
}