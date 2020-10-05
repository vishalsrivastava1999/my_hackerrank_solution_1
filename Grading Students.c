#include<stdio.h>
int grade(int g[],int n)
{
    int i,a;
    for(i=1;i<=n;i++)
        {
            if(g[i]>=38)
            {
            a=0;
            while(a<g[i])
            a+=5;
            if(a-g[i]<3)
                g[i]=a;
            }
        }
        for(i=1;i<=n;i++)
            printf("%d\n",g[i]);
    return 0;
}
main()
{
    int n,g[100],i;
        scanf("%d\n",&n);
    if(n>=0 && n<=60)
    {
        for(i=1;i<=n;i++)
            scanf("%d\n",&g[i]);
       grade(g,n);
        
    }
}

