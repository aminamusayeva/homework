#include <stdio.h>
void printBits(void*a)
{
	int i;
	unsigned int x;
	x=*(unsigned*)a;
	for(i=31;i>=0;i--)
	{
		if((x & ((unsigned)1<<i))!=0)
		printf("1");
		else
		printf("0");
		if (i==31)
		printf(" ");
		if(i==23)
		printf(" ");
	}
	printf("\n");
}
	int main(void)
	{
		float t=0.0,a,b=0.0;
		a=b/t;
		printf("%f\n",a);
		printBits(&a);
		return 0;
	}
