#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x[a][a],y[b][b],z[c][c];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<b;k++)
    {
        for(l=0;l<b;l++)
        {
            scanf("%d",&b[k][l]);
        }
    }
    for(m=0;m<c;m++)
    {
        for(n=0;n<c;n++)
        {
            scanf("%d",&c[m][n]);
        }
    }
}
