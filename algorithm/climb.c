#include <stdio.h>

int main(void)
{
	int n=0;
	scanf_s("%d", &n);
	int i;
    int a = 0;
    int b = 0;
    int num = 1;
	for (i = 1; i <= n; i++) {
        
            a = b;
            b = num;
            num = a + b;
        }
        printf("%d", num);
        return 0;
	
}

/*
n=x+2y   x y  3=1+2*1  3=3+2*0  3=2*1+1   ||x=1 y=1 || x=3 y=0 ||y=1 x=1
2=0+2*1  2=2+2*0    x=0 y=1 || x=2 y=0
4=0+2*2 4=4+2*0 4=2+2*1 4=2*1+2  ||x=0 y=2 || x=4 y=0|| x=2 y=1 || y=1 x=2
*/
