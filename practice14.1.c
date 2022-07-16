# include <stdio.h>
# include <string.h>
# define index 12
struct month {
char name[10];
char abbrev[4];
int days;
};
int main(void)
{
int i;
int total;
struct month look[index]={
{"January", "jan",31},
{"February","feb",28},
{"March","mar",31},
{"April","apr",30},
{"May","may",30},
{"June","jun",31},
{"July","jul",31},
{"August","aug",31},
{"September","sep",30},
{"October","oct",31},
{"November","nov",30},
{"December","dec",31}
};
printf("%d",look[index].days);
     for (i=0,total=0;i<index;i++)
    {
    total+=look[index].days;
}
return 0;
}




































