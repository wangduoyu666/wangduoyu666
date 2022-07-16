# include <stdio.h>//还是得用那个argv[]办法 p312
# include <string.h>
 int main(void)
 {
 char str[50];
 printf("enter a word:");
 gets(str);
 puts(strrev(str));
 }
