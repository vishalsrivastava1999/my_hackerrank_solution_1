#include<stdio.h>

int main()
{
    long long int t,sum=0,v=3,m;
    scanf("%lld",&t);
    while(t>v)
    {
       // prev=v;
        sum+=v;
        v*=2;
    }
    if(sum>=t)
    v=(sum-t)+1;
    else
    m=t-(sum+1);
    v-=m;


    printf("%lld",v);
    return 0;
}
