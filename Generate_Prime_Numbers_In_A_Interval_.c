#include <bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int c=0;
    if(n==1)
    return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    return true;
    else 
    return false;
}
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    for(int i=m;i<=n;i++)
    {
        if(prime(i))
        cout<<i<<'
';
    }
}