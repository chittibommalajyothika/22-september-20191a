#include<stdio.h>
#include<string.h>
int presence(char *s1,char *sub)
{
    int res=0;
    int i=0,l1=0,l2=0;
    l1=strlen(s1);
    l2=strlen(sub);
    while(s1[i]!='\0')
    {
        if(s1[i]==sub[0])
        {
            if((i+l2)>l1)
                break;
            if(strncmp(s1+i,sub,l2)==0)
            {
                res=1;break;
            }
        }
        i++;
    }
        return res;
}
int main()
{
    char s1[20]={0},sub[10]={0};
    int c1=0,c2=0,i,j,res;
    gets(s1);
    gets(sub);
    if(presence(s1,sub))
        printf("present");
    else
        printf("not present");
    return 0;
}
