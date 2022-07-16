# include <stdio.h> //试了一下，反正宏函数定义后面的部分老是出错，尴尬
# define AVERAGE(X,Y)  X+Y
# define PR(X,Y) printf("the result is %d.\n", X+Y)          //算了不写了，到时候需要的时候再说
int main(void)
{
int X,Y;
int z,m;
z,m=AVERAGE(X,Y);
printf("enter two nums:\n");
scanf("%d %d", X,Y);
z,m=AVERAGE(1,1);
printf("evaluating AVERAGE(1,1):");
PR(z,m);
return 0;
}
