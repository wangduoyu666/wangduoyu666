# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main(int argc, char *argv[])
{
int ch;
int str;
char *n;
FILE *fp;
unsigned long count=0;
printf("enter a character:");
scanf("%s", &str);
if(argc !=2)
{
    printf("usage: %s filename\n", argv[0]);
    exit(EXIT_FAILURE);
}
if ((fp=fopen(argv[1], "r"))== NULL)
{
printf("can't open %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while ((ch= getc(fp)) !=EOF )
{
    if(n=strchr(str,ch))
    {
putc(*n, stdout);
count++;
    }
}
fclose(fp);
printf("file %s has %lu characters\n", argv[1], count);
return 0;
}
