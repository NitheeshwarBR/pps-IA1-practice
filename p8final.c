#include<stdio.h>
struct _complex
{
  float real,imaginary;
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
  Complex a;
  printf("ENTER THE COMPLEX\n");
  scanf("%f+%fi",&a.real,&a.imaginary);
  return a;
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
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
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
  printf("%0.0f+%0.0fi\n",c[0].real,c[0].imaginary);
  for(int i=1;i<n;i++)
  {
    printf("+ %0.0f+%0.0fi\n",c[i].real,c[i].imaginary);
  }
  printf("is %0.0f+%0.0fi\n",result.real,result.imaginary);
}
int main()
{
  int a;
  Complex result;
  Complex n[a];
  a=get_n();
  input_n_complex(a,n);
  result=add_n_complex(a,n);
  output(a,n,result);
  return 0;
}
