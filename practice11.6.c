//��дһ����Ϊis_within()�ĺ���������һ���ַ���һ��ָ���ַ����� ָ����Ϊ���������βΡ�
//���ָ���ַ����ַ����У��ú�������һ������ֵ ����Ϊ�棩��
//���򣬷���0����Ϊ�٣�����һ�������ĳ����в��Ըú����� ʹ��һ��ѭ���������ṩ����ֵ��

#include <stdio.h>//again,�����ˣ�����Ŀ������ðɣ�ָ���ַ���ָ���ַ���ָ���ַ���
#define SIZE 30
#define LIM 4
void is_within (char *string[], char str);
char ch;
int n;
int main(void)
{
char str[LIM][SIZE];
char temp[SIZE];
int i=0;
printf("enter %d world:\n", LIM);
while (i<LIM&&fgets(temp,SIZE,stdin))
{
    if (temp[0]="str[LIM][SIZE]")
    {
        i++;
    printf("%s is in the string\n",temp);
    }
    else
        {
            i++;
        printf("%s is not in the string\n",temp);
        }
    return 0;
}
void is_within(char *string[], char str)
{
    char *temp[SIZE];
    char *ret_val;
    int i=0;
    ret_val=fgets(str,n,stdin);
    if(ret_val)
    {
    *ret_val=*temp[SIZE];
        printf("1");
    }
    else
    {
    printf("0");
}
}
return 0;
}
