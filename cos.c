#include <stdio.h>
#include <math.h>
double mycos(double x)
{
    while(x>0 && x>2*M_PI) x-=2*M_PI;
    double sum=0,h,eps=1.e-16;
    int i=0;
    h=1;
    do
    {
        sum +=h;
        h*=-x*x/((2*i+1)*(2*i+2));
        i++;
    }
    while(fabs(h)>eps);
    return sum;
}
int main(void)
{
    double a,x=1;
    a=mycos(x);
    FILE*fout=NULL;
    if(!(fout=fopen("output.txt","w")))
    return 1;
    while(fabs(a/cos(x)-1)<1.e-14)
    {
        printf("| %g | %g | %g | %g |\n",x,a,fabs(a-cos(x)),fabs(a/cos(x)-1));
        x+=2;
        a=mycos(x);
    }
return 0;
}
