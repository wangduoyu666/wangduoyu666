# include <stdio.h>
# include <string.h>
char *s_gets(char *st, int n);
# define NLEN 30
struct namect {
char fname[NLEN];
char mname[NLEN];
char lname[NLEN];
int numb;
};
int main(void)
{
struct namect person;
printf("please enter your first name.\n");
s_gets(person.fname, NLEN);
printf("please enter your middle name.\n");
s_gets(person.mname,NLEN);
printf("please enter your last name.\n");
s_gets(person.lname, NLEN);
printf("please enter your numb.\n");
scanf("%d", &person.numb);
printf("%s, %s %s.--%d.\n", person.fname, person.mname, person.lname, person.numb);
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
