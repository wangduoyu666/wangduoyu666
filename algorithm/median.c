// this code should be altered because some error
//as same before, just record it
//some codes I had wrote have already disappeared because I didn't timely reserve it 
//what a pity

#include <stdio.h>

void comp(int num1[], int num2[])
{
        int h;
        int sum[h];
        int e,f;
        if(e<f)
                sum[h]=num2[h];
        else
                sum[((e+f)/2+1)+h]=num1[h];
        if(e>f)
                sum[h]=num1[h];
        else
                sum[((e+f)/2+1)+h]=num2[h];
}

void sort(int total[], int len)
{
        int i,j,temp;
        for(i=0; i<len-1; ++i)
        {
                for(j=0; j<len-1-i;++j)
                {
                        if(total[j]>total[j+1])
                        {
                                temp=total[j];
                                total[j]=total[j+1];
                                total[j+1]=temp;
                        }
                }
        }
}
        

int main(void)
{
        int t,y;
        int a[t];
        int b[y];
        int n;
        int c[n];
        int mid;
        for(n=0; n<(t+y)/2+1;n++)
        {
                comp(a[t], b[y]);
        }
        for(n=0; n<(t+y)/2; n++){
                comp(a[t], b[y]);
}
        for(n=0; n<t+y; n++)
                printf("%d\n", c[n]);
        sort(c, n);
        if(n%2==0)
        mid=(c[n/2]+c[n/2+1])/2;
        else
        mid=c[n/2];
        return(0);
}



