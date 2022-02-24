// this code should be altered because some error
//as same before, just record it
//some codes I had wrote have already disappeared because I didn't timely reserve it 
//what a pity
//太久没有看算法了，好多东西都忘了，还得慢慢捡起来
//代码这东西，真的得多写才行

/*#include <stdio.h>


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
        for(n=0; n<y;n++)
        {
               c[n]=b[n];
        }
        for(n=0; n<t; n++){
                c[y+n]=a[n];
}
        for(n=0; n<t+y; n++)
                printf("%d\n", c[n]);
        sort(c, n);
        if(n%2==0)
        mid=(c[n/2]+c[n/2-1])/2;
        else
        mid=c[(n/2)+1];
        return(0);
}
*/


// this code should be altered because some error
//as same before, just record it
//some codes I had wrote have already disappeared because I didn't timely reserve it 
//what a pity
//太久没有看算法了，好多东西都忘了，还得慢慢捡起来
//代码这东西，真的得多写才行

#include <stdio.h>
#define t 6
#define y 7

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
        int a[t]={2,4,5,8,9,12}
        int b[y]={24,1,6,13,15,16,60}
        int n;
        int c[n];
        int mid;
        int k;
        int num[k];
        for(n=0; n<y;n++)
        {
               c[n]=b[n];
        }
        for(n=0; n<t; n++){
                c[y+n]=a[n];
}
        for(n=0; n<t+y; n++)
                printf("%d\n", c[n]);
        c[n]=num[k];
        sort(num,k);
        printf("------\n");
        printf("%d\n",num[k]);
        if(k%2==0)
        mid=(num[k/2]+num[k/2-1])/2;
        else
        mid=num[(k/2)+1];
        printf("-----\n");
        printf("%d",mid);
        return(0);
}




