# include <stdio.h>
# define LEN 10
struct name{
char first[LEN];
char last[LEN];
};

struct student{
struct name handle;
float grade;
float average;
};
int main(void)
{
struct student csize[4]={
{{"enwen", "villard"},
"float grade",
"float average",
},
{{"rodney", "swillbelly"},
"float grade",
"float average",
},
{{"polly","poetica"},
"float grade",
"float average",
},
{{"dudley", "forse"},
"float grade",
"float average",
}
};
int count =0;
int index;
printf("please enter the name:\n");
printf("press [enter] at the start of a line to stop.\n");
while(count<4 && s_gets(csize[4].handle, LEN) != NULL
&& csize[4].handle[0] !='\0')
{
printf("now enter the grade.\n");
scanf("%f", &csize[count++].grade);
while (getchar() != '\n')
continue;
if (count <4)
printf("enter the next grade.\n");
}
if(count>0)
{
printf("here is the list of your struct:\n");
for (index=0;index<count; index++)
printf("%s %.2f %.2f\n", csize[index].handle, csize[index].grade, csize[index].average);
}
else
printf("no grade?too bad.\n");
return 0;
}
char *s_gets(char *st, int n)
{
  char *ret_val;
    char *find;
    ret_val=fgets(st, n, stdin);
    if(ret_val)
    {
        find=strchr(st,'\n');
        if(find)
            *find='\0';
        else
            while(getchar()!='\n')
            continue;
    }
    return ret_val;
}
