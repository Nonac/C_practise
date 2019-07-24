#include <stdio.h>

int i=0;

void move(int n,int i,char x,char y,char z)
{
    if (n == 1)
    {
        printf("%d.%c-->%c\n",i,x,z);
        i++;
    } else
    {
        move(n-1,i,x,z,y);
        printf("%d.%c-->%c\n",i,x,z);
        i++;
        move(n-1,i,y,x,z);
    }
}


int main()
{
    int n;
    printf("请输入汉诺塔的层数：");
    scanf("%d",&n);
    printf("移动的步骤如下:\n");

    move(n,i,'X','Y','Z');
    return 0;
}