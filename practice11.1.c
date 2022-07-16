#include <stdio.h>//求你了，以后先把题目看清楚再来写代码好吧
#define STLEN 81
void ad(char *words);
int main(void)
{
    char words[STLEN];
    puts("enter a string,please.");
    gets(words);
    puts(words);
    printf("%p",words);
    void ad(char *words)
    {
        char *ret_val;
        int n;
        ret_val=fgets(words,n,stdin);
        printf("%p",ret_val);
    }
    return 0;
}
