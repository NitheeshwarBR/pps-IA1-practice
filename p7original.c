#include<stdio.h>
struct _complex
{
  float real,imaginary;
};
typedef struct _complex Complex;
Complex input_complex()
{
  Complex a;
  printf("ENTER THE COMPLEX NUMBER\n");
  scanf("%f %f",&a.real,&a.imaginary);
  return a;
}
Complex add(Complex a,Complex b)
{
  Complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
  return c;
}
void output(Complex a,Complex b,Complex c)
{
  printf("%0.0f+%0.0fi + %0.0f+%0.0fi is  %0.0f+%0.0fi \n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
  Complex a,b,sum;
  a=input_complex();
  b=input_complex();
 sum=add(a,b);
 output(a,b,sum);
 return 0;

}
