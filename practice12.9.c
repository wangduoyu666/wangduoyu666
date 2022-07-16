//自定义头文件是真的没办法
# include <stdio.h>
# include <stdlib.h>
int main(void)
{
double *ptd;
char ch;
int m;
int temp;
int i=0;
int number;
puts("how many words do you wish to enter?");
if(scanf("%d", &m) !=1)
{
puts("number not correctly entered --bye.");
exit(EXIT_FAILURE);
}
ptd = (double*)malloc(ch * sizeof(double));
if(ptd==NULL)
{
puts("memory allocation failed.goodbye.");
exit(EXIT_FAILURE);
}
printf("enter %d words now:\n", m);
scanf("%d", &m);
number=m;
while(i<m && scanf("%s", &ptd[i])==1)
++i;
printf("here are your words:\n");
for(i=0; i<number;i++)
{
printf("%s", ptd[i]);
puts("done.");
free(ptd);
}
return 0;
}
