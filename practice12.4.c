# include <stdio.h>
int m=0;
void move(void);
int main(void)
{
    extern int m;
printf("enter a num:\n");
scanf("%d",&m);
while(m!=100)
    move();
printf("you will be with KK forever!\n");
return 0;
}
void move(void)
{
    int count;
    printf("TK!you are the best!\n");
    scanf("%d",&m);
    count++;
    printf("%d\n",count+1);
}
