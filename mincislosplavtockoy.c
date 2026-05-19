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
		float a=1.0;int i=0;
		do
		{
			printf("%d: %e=\t",i,a);
			printBits(&a);
			printf("\n");
			a/=2.0; i--;
		}
		while(a>0);
		printf("a=%e\n",a);
		printBits(&a);
	return 0;
}
