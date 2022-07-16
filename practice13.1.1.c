#include <stdio.h>
# include <string.h>
int main(void)
{
char str[80];
char fname[15];
FILE *fp;
printf("enter filename:");
gets(fname);
fp=fopen(fname, "w");
printf("enter strings:");
printf("press <ENTER> to quit.\n");
do
{
gets(str);
strcat(str,"\n");
fputs(str,fp);
}
while(*str !='\n');
fclose(fp);
}
