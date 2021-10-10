#include<stdio.h>

int main()
{
    char str[10000];
    scanf("%s",str);
    int i=0;
    int ch=0;
    int count=0;
    int x=-1,y=-1;
    while(str[i]!='\0')
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9'))
            ch=1;
        else if((str[i]=='.' || str[i]=='-'  ||str[i]=='_' || str[i]=='@') && (i!=0 && str[i+1]!='\0'))
            ch=1;
        else
        {
            ch=-1;
            break;
        }
        if(str[i]=='@')
        {
            count++;
            x=i;
        }
        if(count>1)
        {
            ch=-1;
            break;
        }
        if(str[i]=='.')
        {
            y=i;
        }
        i++;
    }
    if(y-x<2)
        ch=-1;
    if(ch==1)
        printf("Valid Email address\n");
    else
        printf("Invalid Email address\n");
}
