# include <stdio.h> //����һ�£������꺯���������Ĳ������ǳ�������
# define AVERAGE(X,Y)  X+Y
# define PR(X,Y) printf("the result is %d.\n", X+Y)          //���˲�д�ˣ���ʱ����Ҫ��ʱ����˵
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
