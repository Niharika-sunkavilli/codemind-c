#include <bits/stdc++.h>
using namespace std;
int palindrome(int n)
{
    int a=n,rem,s=0;
    while(n>0)
    {
        rem=n%10;
        s=s*10+rem;
        n=n/10;
    }
    if(a==s)
    return true;
    else
    return false;
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++)
    {
        if(palindrome(i))
        cout<<i<<" ";
    }
}