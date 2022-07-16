# include <stdio.h>
# include <limits.h>
char *itobs(int argc, char *val, char *ps);
void show_bstr(const char*);
int main(void)
{
char bin_str[CHAR_BIT *sizeof(int) +1];
char bin_val[CHAR_BIT *sizeof(int)+1];
int number;
puts("Enter integers and see them in binary.");
puts("Non-numeric inputs terminates program.");
while (scanf("%d", &number) ==1)
{
itobs(number, bin_val,bin_str);
printf("%d is",number);
show_bstr(bin_str);
putchar('\n');
}
puts("bye!");
return 0;
}
char *itobs(int n, char *val,char *ps)
{
int i;
const static int size = CHAR_BIT *sizeof(int);
for (i=size-1; i>=0; i--, n>>=1)
ps[i]= (01 &n) +'0';
ps[size] = '\0';
return ps;
}
void show_bstr(const char *str)
{
int i=0;
while (str[i])
{
putchar (str[i]);
if(++i % 4==0 && str[i])
putchar(' ');
if(str[0]==0)
    return 0;
else
    return 1;
}
}
