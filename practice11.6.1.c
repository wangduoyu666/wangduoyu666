#include <stdio.h>//again,�����ˣ�����Ŀ������ðɣ�ָ���ַ���ָ���ַ���ָ���ַ���
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
