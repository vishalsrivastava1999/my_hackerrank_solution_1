#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,x;
cin>>t;
for(x=0;x<t;x++)
{
    int first[26]={0},second[26]={0};
    int count=0;
    char str[10000];
    cin>>str;
    int i,k=strlen(str)-1;
     if(strlen(str)%2==1)
        count=-1;
    else
    {
        i=0;
        while(i<strlen(str)/2)
        {
            first[str[i++]-'a']++;
            second[str[k--]-'a']++;
        }
        for(i=0;i<26;i++)
        {

            if(first[i]>second[i]&&first[i]!=0)
                count+=abs(first[i]-second[i]);
        }
    }
     cout<<count<<endl;
}
return 0;
}
