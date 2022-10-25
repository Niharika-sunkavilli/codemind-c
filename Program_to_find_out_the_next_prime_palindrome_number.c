#include <bits/stdc++.h>
using namespace std;
int palindrome(int n)
{
    int rem,s=0,a=n;
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
int prime(int a)
{
    int count=0;
    if(a==1)
    return false;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        count++;
    }
    if(count==0)
    return true;
    else
    return false;
}
int main()
{
    int n;
    cin>>n;
    for(int i=n+1;;i++)
    {
        if(palindrome(i) && prime(i))
        {
            cout<<i;
            break;
        }
    }
}