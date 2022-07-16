# include <stdio.h>
#define ROWS 3
#define COLS 5
void copy(int (*ar)[COLS],int rows);
int main(void)
{
int i,j;
int m,n;
int array2[3][5];
int array[ROWS][COLS]={
{2,3,6,8,9},
{1,7,22,5,6},
{12,23,34,56,67},
};
memcpy(array2,array,sizeof(int)*15);
for (int i=0;i<3;i++)
{
for (int j=0;j<5;j++)
printf("%d ",array2[i][j]);
}
void copy(int (*ar)[COLS],int rows)
{
    int t,k;
    for(t=0;t<rows;t++)
        for(k=0;k<COLS;k++)
        printf("%d ",ar[t][k]);
}
return 0;
}
