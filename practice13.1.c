# include <stdio.h>
# include <stdlib.h>
int main(void)
{
char str[80];
char fname[15];
FILE *fp;
printf("enter filename:");
gets(fname);
fp=fopen(fname, "r");
if (fp==NULL)
{
    printf("file not found");
    return 0;
}
printf("the file contents:\n");
while ((fgets(str,80,fp)) !=NULL)
    puts(str);
fclose(fp);
}
