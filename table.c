#include<stdio.h>
void table(int n)
{
     for(int i=1;i<=10;i++)
    {
        printf("\n\n%d  * %d  =  %d",n,i,n*i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    table(n);
    return 0;
}
