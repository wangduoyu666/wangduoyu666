# include <stdio.h>
#define NUMEL 10
int selectionsort(int [], int);
int main(void)
{
    int num[NUMEL] = {22, 5, 67, 98, 45, 32, 101, 99,73, 10};
    int i, moves;
    moves = selectionsort(num, NUMEL);
    printf("the sorted list, in ascending order, is:\n");
    for (i = 0; i< NUMEL; i++)
        printf("%5d\n", num[i]);
    printf("\n %d moves were made to sort this list\n",  moves);
    return 0;
}
int selectionsort(int num[], int numel)
{
int i,j,min,minidx,temp,moves = 0;
for (i = 0; i<(numel-1); i++)
{
    min = num[i];
    minidx = i;
    for (j = i+1; j<numel; j++)
    {
        if (num[j] <min)
        {
            min = num[j];
            minidx = j;
        }
    }
    if (min < num[i])
    {
        temp = num[i];
        num[i] = min;
        num[minidx] = temp;
        moves++;
    }
}
return (moves);
}














































