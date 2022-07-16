# include <stdio.h>
# include <stdlib.h>
extern void srand(unsigned int x);
extern int rand(void);
int main(void)
{
int count;
int k;
unsigned seed;
printf("please enter your choice for seed.\n");
while(scanf("%u", &seed)==1)
{
srand(seed);
for(count=0;count<1000;count++)
printf("%d\n", rand());
k++;
printf("%d\n",k);
printf("please enter next seed(q to quit):\n");
}
printf("done\n");
return 0;
}
