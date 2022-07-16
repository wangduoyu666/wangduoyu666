# include <stdio.h> //问题来了，它没说要我初始化这个数组吧！尴尬
# define LEN 12     //我是不可能初始化这个题目的，12个组，太难了
struct plane {
char fname[LEN];
char lname[LEN];
char seat[LEN];//seat初始化为0和1，无为0，有为1
int numb;
};
char  getchoice(void);
char showmenu(void);
void eatline(void);
void toempty(struct plane* pst);
void tolempty(struct plane* pst);
void toalpha(struct plane* pst);
void tochoose(struct plane* pst);
void todelete(struct plane* pst);
char s_gets(char *st, int n);
int main(void)
{
char ch;
char choice;
void(*pfun)(char *);
puts("enter a character(f to quit):");
while((choice=showmenu())!='f')
{
switch(choice)
{
case'a':pfun=toempty;break;
case'b':pfun=tolempty;break;
case'c':pfun=toalpha;break;
case'd':pfun=tochoose;break;
case'e':pfun=todelete;break;
}
strycpy(copy,line);
show(pfun,copy);
}
puts("enter a character(f to quit):");
puts("bye!");
return 0;
}
char showmenu(void)
{
char ans;
puts("enter menu choice:");
puts("a)show number of empty seats   b)show list of empty seats");
puts("c)show alphabetical list of seats  d)assign a customer to a seat assignment");
puts("e)delete a seat assignment  f)quit");
ans=getchar();
eatline();
while(strchr("abcdef", ans)==NULL)
{
    puts("please enter a,b,c,d,e,f:");
    eatline();
}
return ans;
}
void eatline(void)
{
    while(getchar() !='\n')
        continue;
}
void toempty(struct plane* pst)
{
    int i,index;
    for(i==1;i<index;i++)
        count++;
    printf("there are %d seats." pst->seats);
}
void tolempty(struct plane *pst)
{
    int i,index;
    for(i==1;i<index;i++)
        printf("%s %s %d %d",pst->fname, pst->lname, pst->seat, pst->numb);
}//我想写伪代码了，尴尬。这个题就是前面一些题的某个步骤的合集。关于结构里的字母排序，内容删除替补


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


