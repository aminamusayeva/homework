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
		double x = 1.0;
        double b;
        int i = 0;
    do
    {
		printf("%d: %e\n",i,x);
		printBits(&x);
		printf("\n");
		b=1+x;
		printBits(&b);
		printf("\n\n");
		x/=2.0; i--;
		b=1+x;
	}
	while(b>1.0);
	b=1+x;
	printBits(&b);
	printf("\n");
	return 0;
}
