# include <stdio.h>
int main(void)
{
int units;
printf("how many pounds to a firkin of butter?\n");
scanf("%d", &units);
while(units != 56)
{
printf("no,luck,my friend.try again.\n");
scanf("%d", &units);
}
printf("you must have looked it up!\n");
return 0;
}
