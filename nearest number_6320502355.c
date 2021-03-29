#include<stdio.h>
int main()
{
    int a,b,k=0,x,z,p;
    scanf("%d %d",&a,&b);
    x=a;
    while(x>0)
    {
        k=x%10;
        x=x/10;
        if(k==b)
            break;
    }
    if(k==b)
        printf("%d",a);

    else
    {
        x=a;
        z=x%10;
        x=x/10;
        p=x%10;

        if(p<b&&z>b)
        {
           printf("%d",(10-z)+a);
        }
        else if(z>b)
        {
          printf("%d",a+((b+10)-z));
        }
        else if(z<b)
        {
            printf("%d",a+(b-z));
        }
    }





}
