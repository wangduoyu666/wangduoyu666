# include <stdio.h>
#define index 5
void sort(const double array[],int n);
int main(void)
{
double array[]={20.0,17.66,8.2,15.3,22.22};
printf("The original dip array:\n");
sort(array,index);
return 0;
}
void sort (const double array[],int n)
{
int i;
i=0;
for (i=0;i<n;i++)
printf("%8.3f",array[n-1-i]);
putchar('\n');
}
