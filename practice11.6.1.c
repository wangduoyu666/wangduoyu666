#include <stdio.h>//again,求你了，把题目看清楚好吧！指定字符！指定字符！指定字符！
#include <string.h>
int main(void)
{
    char str[100], ch;
    char *n;
    printf("enter a string:");
    gets(str);
    printf("enter a character:");
    ch=getchar();
    n=strchr(str,ch);
    if(n==NULL)
        printf("the character is not found");
    else
        printf("the first occurrence is %d",n-str);
}
