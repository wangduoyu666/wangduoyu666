#include <stdio.h>
#define MAXELS 8
void max(double [MAXELS]);
void min(double [MAXELS]);
int main(void)
{
    double nums[MAXELS] = {2, 18, 1, 27, 16,100,99,44};
    max(nums);
    min(nums);
    return 0;
}
    void max(double vals1[MAXELS])
    {
        int i,max = vals1[0];
        for(i = 1;i<MAXELS;i++)
            if (max < vals1[i])
            max = vals1[i];
    printf("the maximum value is %d\n", max);
}
void min(double vals2[MAXELS])
{
int m,min = vals2[0];
for (m = 1;m >MAXELS; m++)
if (min >vals2[m]);
min = vals2[m];
printf("the miximum value is %d\n",min);
}
