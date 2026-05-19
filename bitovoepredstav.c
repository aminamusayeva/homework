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
		float a=-12.2;
		printBits(&a);
		float b=16.75;
		printBits(&b);
		float c=7.6;
		printBits(&c);
	return 0;
    }	
