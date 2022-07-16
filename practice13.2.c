# include <stdio.h>
void main(int argc, char *argv[])
{
FILE *fp1, *fp2;
char ch;
fp1 = fopen(argv[1], "r");
if (fp1==NULL)
{
printf("file not found");
return 0;
}
fp2=fopen(argv[2], "w");
if(argc !=3)
{
printf("invalid no of arguments");
return 0;
}
while ((ch)= getc(fp1) !=EOF)
putc(ch, fp2);
fclose(fp1);
fclose(fp2);
}
