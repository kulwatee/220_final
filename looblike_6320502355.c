#include<stdio.h>
int main()
{
    int n,max,i,j,k,m;
    scanf("%d",&n);
    int x[n],y[10000];
    for(j=1; j<=10000; j++)
    {
        y[j]=0;
    }
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
        y[x[i]]++;
    }
    max=y[1];
    for(k=2; k<=10000; k++)
    {
        if(y[k]>max)
        {
            max=y[k];
        }

    }
    //printf("%d",max);
    for(m=1; m<10000; m++)
    {
        if(max==y[m])
            printf("%d",m);
    }



}
