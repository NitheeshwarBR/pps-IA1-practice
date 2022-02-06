#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("ENTER TWO STRINGS\n");
  scanf("%s%s",a,b);
}
int strcmp(char *a,char *b)
{
  int result;
  for(int i=0;*a!='\0'&&*b!='\0';i++)
  {
    if(*a!=*b)
    {
      break;
    }
    a++;
    b++;
  }
  result=*a-*b;
  return result;
}
void output(char *a,char *b,int result)
{
  if(result>0)
  {
    printf("%s is greater than %s \n",a,b);
  }
  else if(result<0)
  {
    printf("%s is greater than %s \n",b,a);
  }
  else if(result==0)
  {
    printf("%s is equal to %s \n",a,b);
  }
}
int main()
{
  int result;
  char a[100];
  char b[100];
  input_two_string(a,b);
  result=strcmp(a,b);
  output(a,b,result);
  return 0;
}