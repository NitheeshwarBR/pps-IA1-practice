#include<stdio.h>
struct _complex
{
  float real ,imaginary;
};
typedef struct _complex Complex;
int get_n()
{
  int n;
  printf("ENTER THE LIMIT\n");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
  Complex x;
  printf("ENTER THE COMPLEX NUMBERS\n");
  scanf("%f+%fi",&x.real,&x.imaginary);
  return x;
}
void input_n_complex(int n,Complex c[n])
{
  for(int i=0;i<n;i++)
  {
    c[i]=input_complex();
  }

}
Complex add(Complex a,Complex b)
{
  Complex Sum;
  Sum.real=a.real+b.real;
  Sum.imaginary=a.imaginary+b.imaginary;
  return Sum;
}
Complex add_n_complex(int n,Complex c[n])
{
  Complex result;
  for(int i=0;i<n;i++)
  {
    result=add(c[i],result);
  }
  return result;
}
void output(int n,Complex c[n],Complex result)
{
    printf("%f+%fi\n",c[0].real,c[0].imaginary);
  for(int i=1;i<n;i++)
  {
    printf("+ %f+%fi\n",c[i].real,c[i].imaginary);
  }
  printf("is %f+%fi\n",result.real,result.imaginary);
}
int main()
{
  int x;
  Complex result;
  Complex n[x];
  x=get_n();
  input_n_complex(x,n);
  result=add_n_complex(x,n);
  output(x,n,result);
  return 0;
}
