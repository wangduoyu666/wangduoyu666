# include <stdio.h>//尴尬，光顾着用函数了，发现没循环起来，明天再改改
# include <math.h>
double point(double x, double y);
double sin(double A);
double cos(double A);
int main(void)
{
int r;
double A;
double x,y;
printf("enter r,A:");
scanf("%d  %f", r, A);
sin(A);
cos(A);
x=r*sin(A);
y=r*cos(A);
point(x,y);
printf("%.2f  %.2f", x ,y);
 while(A>0 && A<90.0)
   {
    for(r=0;r>0;r++)
{
    printf("enter r,A:");
    scanf("%d  %f", r, A);
    sin(A);
    cos(A);
    x=r*sin(A);
    y=r*cos(A);
    printf("%.2f  %.2f", x ,y);
}
   }
return 0;
}
double point(double x, double y)
{
    int r;
    int A;
    sin(A);
    cos(A);
    x=r*sin(A);
    y=r*cos(A);

}




