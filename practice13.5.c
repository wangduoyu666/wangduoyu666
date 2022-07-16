# include <stdio.h>
# include <stdlib.h>
# define CNTL_Z '\032'
int main(int argc, char *argv[81])
{
int ch;
FILE *fp;
long count,last;
puts("enter the name of the file to be processed:");
scanf("%80s", argv[0]);
if((fp= fopen(argv[1],"rb"))==NULL)
{
printf("reverse can't open %s\n", argv[1]);
exit(EXIT_FAILURE);
}
fseek(fp, 0l, SEEK_END);
last= ftell(fp);
for(count=1l; count<=last;count++)
{
fseek(fp, -count, SEEK_END);
ch=getc(fp);
if(ch !=CNTL_Z && ch !='\r')
putchar(ch);
}
putchar('\n');
fclose(fp);
return 0;
}
