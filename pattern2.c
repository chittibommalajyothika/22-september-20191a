#include<stdio.h>
int main()
{
    int n,i,j,t;
   int a[10][10]={0},low=0,m=1;
   scanf("%d",&n);
     t=n;
    for(i=0;i<3;i++,low++,n--)
    {
        for(j=low;j<=n;j++,m++)
            a[i][j]=m;
        for(j=low+1;j<=n;j++,m++)
            a[j][n]=m;
        for(j=n-1;j>=low;j--,m++)
            a[n][j]=m;
        for(j=n-1;j>low;j--,m++)
            a[j][low]=m;
    }
    printf("\t\t\t\tPerfect Square\n");
    for(i=0;i<t+1;i++)
    {
        printf("\n\n\t");
        for(j=0;j<t+1;j++)
        {
            printf("%6d",a[i][j]);

        }
    }
    return 0;
}
