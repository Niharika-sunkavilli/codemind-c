#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,rem,s=0;
    cin>>a;
    n=abs(a);
    while(n>0)
    {
        rem=n%10;
        s=s*10+rem;
        n=n/10;
    }
    if(a>0)
    cout<<s;
    else
    cout<<"-"<<s;
}