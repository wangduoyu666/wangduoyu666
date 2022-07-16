#include <stdio.h>
#define MAXELS 5
int Max(int[], int);
int main()
{
int nums[MAXELS] = {22,33,44,55,66};
printf("the maximum value is %d\n",Max(nums, MAXELS));
return 0;
}
int Max(int vals[], int numels)
{
int i,max = vals[0];
for (i =1; i<numels; i++)
if (max < vals [i])
max = vals[i];
return(max);
}
