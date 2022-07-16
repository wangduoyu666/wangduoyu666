# include <stdio.h>
# include <dir.h>
int main(void)
{
struct code_c file;
int ret_code;
ret_code = findfirst("*.*", &file, 0);
while(ret_code ==0)
{
printf("%s", file.ff_name);
ret_code = findnext(&file);
}
}
