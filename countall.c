#include<stdio.h>
void count(int *a,int n)
{
    int i=0;
    int arr[10]={0};
    for(i=0;i<n;i++)
    {
        arr[a[i]]++;
    }
    for(i=0;i<10;i++)
    {
       if(arr[i]>0)
            printf("%d is repeated %d times\n",i,arr[i]);
    }
}
void main()
{
    int a[20],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    count(a,n);
}
