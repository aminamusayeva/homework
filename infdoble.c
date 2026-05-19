#include <stdio.h>
void printBits(void *a)
{
    int i;
    unsigned long long x;
    x = *(unsigned long long*)a;

    for(i=63;i>=0;i--)
    {
        if ((x & ((unsigned long long)1<<i))!=0)
            printf("1");
        else
            printf("0");
        if (i ==63)
            printf(" ");   
        if (i==52)
            printf(" "); 
    }
    printf("\n");
}
	int main(void)
	{
		double t=0.0,a;
		a=1.0/t;
		printf("%f\n",a);
		printBits(&a);
		return 0;
	}
