#include <stdio.h>
#include <math.h>
double f0(double x)
{
return 1;
}
double f1(double x)
{
return x;
}
double f2(double x)
{
return x*x;
}
double S(double a,double b,double (*f)(double))
{
return (b-a)*f((a+b)/2);
}
double I0(double a,double b)
{
return b-a;
}
double I1(double a,double b)
{
return b*b/2-a*a/2;
}
double I2(double a,double b)
{
return b*b*b/3-a*a*a/3;
}
int main(void)
{
double a, b;
scanf("%lg %lg",&a,&b);
printf("error_0=%g\n",fabs(I0(a,b)-S(a,b,f0)));
printf("error_1=%g\n",fabs(I1(a,b)-S(a,b,f1)));
printf("error_2=%g\n",fabs(I2(a,b)-S(a,b,f2)));
return 0;
}
