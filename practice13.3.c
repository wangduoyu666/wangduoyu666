# include <stdio.h>
# include <ctype.h>
int main(void)
{
char str[80];
char fname[15];
FILE *fp;
printf("enter filename:");
gets(fname);
fp=fopen(fname,"w");
printf("enter string:");
printf("enter <ENTER> to quit.\n");
do{
gets(str);
puts("in uppercase:");
puts(strupr(str));

fputs(str,fp);
}
while(*str !='\n');
fclose(fp);
}
