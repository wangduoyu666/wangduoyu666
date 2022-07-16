# include <stdio.h>
# include <string.h>
# define INDEX 12

struct month {
char name[10];
char abbrev[4];
int days;
};
int main(void)
{
int i;
int total;
struct month look[INDEX]={
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
char abbrev;
printf("enter a months's abbrev:\n");
scanf("%s", &abbrev);
if(strcmp(abbrev, look[INDEX].abbrev)==0)
{
    for (i=0,total=0;i<INDEX;i++)
    {
    total+=look[i].days;
    }
}
return 0;
}
