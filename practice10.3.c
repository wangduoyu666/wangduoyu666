#include <stdio.h>
#define MAXELS 8
void Max(int [MAXELS]);
int main(void)
{
    int nums[MAXELS] = {2, 18, 1, 27, 16,100,99,44};
    Max(nums);
    return 0;
}
    void Max(int vals[MAXELS])
    {
        int i,max = vals[0];
        for(i = 1;i<MAXELS;i++)
            if (max < vals[i])
            max = vals[i];
    printf("the maximum value is %d\n", max);
}
