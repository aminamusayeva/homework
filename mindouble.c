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
    double a = 1.0;
    int i = 0;
    do 
    {
        printf("%d: %e\t", i, a);
        printBits(&a);
        a/=2.0;
        i--;
    } 
    while (a>0);
    printf("a=%e\n",a);
    printBits(&a);
    return 0;
}
