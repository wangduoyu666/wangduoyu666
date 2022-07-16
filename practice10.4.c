#include <stdio.h>
#define MAXELS 5
int Max(int[], int);
int main(void)
{
int nums[MAXELS] = {22,33,1,3,27};
printf("The index of maximum value is %d",Max(nums, MAXELS));
return 0;
}
int Max(int vals[], int index)
{
int i,max = vals[0];
for (i =1; i<index; i++)
if (max < vals [i])
max = vals[i];
index = i;
return(i);
}
