#include <stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


void update(int *a,int *b) {
    int s,d;
    s=*a+*b;
    d=*a-*b;
    *a=s; *b=d;   
    
}

int main() {
    int a,b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa,pb);
    cout<<a<<"\n"<<abs(b);

    return 0;
}