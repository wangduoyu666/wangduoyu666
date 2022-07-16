# include <stdio.h>
# include <string.h>
int main(void)
{
char str[100],sub[20];
char *n;
printf("enter main string:");
scanf("%[^\n]",str);
fflush(stdin);
printf("enter sub string:");
scanf("%[^\n]",sub);
n=strstr(str,sub);
if(n==NULL)
printf("sub string not found");
else
printf("sub string is found at position %d",n-str);
}
