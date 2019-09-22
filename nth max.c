#include<stdio.h>
void max(int num[],int n,int f)
{
    int i,j,a;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]<num[j])
            {
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    printf("%d",num[f-1]);
}
int main()
{   int num[30];
    int i,j,n,f;
    scanf("%d",&n);//size of array
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    scanf("%d",&f);//max value
    if(f>n)
        printf("%d th max = -1 ",f);
    else
        max(num,n,f);
    return 0;
}
