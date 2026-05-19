#include <stdio.h>
#include <stdlib.h>
void quicksort(int *mas,int left,int right)
{
int i=left;
int j=right;
int p=mas[(left+right)/2];
while (i<=j)
   {
    while (mas[i]<p) 
    i++;
      while (mas[j]>p)
      j--;
    if (i<=j)
       {
           int temp=mas[i];
           mas[i]=mas[j];
           mas[j]=temp;
           i++;
           j--;
       }
   }
if (left<j)
    quicksort(mas,left,j);
if (i<right)
   quicksort(mas,i,right);
}
int main()
{
    FILE*fin=fopen("input.txt","r");
    if (!fin)
    {
        printf("error\n");
        return 1;
    }
int mas[100];     
int n=0;
while (fscanf(fin,"%d",&mas[n])==1)
      {
      n++;
      }
quicksort(mas,0,n-1);
    for (int i= 0;i<n;i++)
        printf("%d ",mas[i]);
}
