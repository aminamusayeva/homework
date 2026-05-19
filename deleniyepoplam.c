#include <stdio.h>
#include <math.h>
int nf;
int sign(double x)
{
    if(x>0) return 1;
    else if(x<0)
    return -1;
    return 0;
}
double g(double x)
{
    nf++;
    return exp(x-M_PI)-1;
}
int root_bisection(double *x, double a, double b, double (*f)(double), double epsilon)
{
    double fa, fb, fc, c;
    int k=0;
    fa=f(a);
    fb=f(b);
    if(fabs(fa)<epsilon){*x=a;return 1;}
    if(fabs(fb)<epsilon){*x=b;return 1; }
    if(sign(fa)*sign(fb)!=-1) return 0;
    while(fabs(b-a)>epsilon)
    {
        c=(a+b)/2;
        fc=f(c);
        k++;
        if(fabs(fc)<epsilon)
        {
            *x=c;
            return k;
        }
        if(sign(fc)*sign(fa)>0)
        {
            a=c;
            fa=fc;
        }
        else
        {
            b=c;
            fb=fc;
        }
    }
    *x=(a+b)/2;
    return k;
}
int main()
{
    double x;
    int res;
    nf=0;
    res=root_bisection(&x, -10, 45, g, 1.e-15);
    if(res)
    {
        printf("x=%lg\nчисло итераций=%d\n", x, res);
        printf("число обращений к функции=%d\n", nf);
    }
    else
    {
        printf("метод не применим\n");
    }
    return 0;
}
