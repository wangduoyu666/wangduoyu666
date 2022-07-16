//编写一个名为is_within()的函数，接受一个字符和一个指向字符串的 指针作为两个函数形参。
//如果指定字符在字符串中，该函数返回一个非零值 （即为真）。
//否则，返回0（即为假）。在一个完整的程序中测试该函数， 使用一个循环给函数提供输入值。

#include <stdio.h>//again,求你了，把题目看清楚好吧！指定字符！指定字符！指定字符！
#define SIZE 30
#define LIM 4
void is_within (char *string[], char str);
char ch;
int n;
int main(void)
{
char str[LIM][SIZE];
char temp[SIZE];
int i=0;
printf("enter %d world:\n", LIM);
while (i<LIM&&fgets(temp,SIZE,stdin))
{
    if (temp[0]="str[LIM][SIZE]")
    {
        i++;
    printf("%s is in the string\n",temp);
    }
    else
        {
            i++;
        printf("%s is not in the string\n",temp);
        }
    return 0;
}
void is_within(char *string[], char str)
{
    char *temp[SIZE];
    char *ret_val;
    int i=0;
    ret_val=fgets(str,n,stdin);
    if(ret_val)
    {
    *ret_val=*temp[SIZE];
        printf("1");
    }
    else
    {
    printf("0");
}
}
return 0;
}
