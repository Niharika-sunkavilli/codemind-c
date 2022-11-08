#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n,rem,s=0;
    cin>>n;
    int a=n;
    while(n>0)
    {
        rem=n%10;
        s+=fact(rem);
        n=n/10;
    }
    if(s==a)
    cout<<"The number "<<a<<" is a strong number";
    else
    cout<<"The number "<<a<<" is not a strong number";
}