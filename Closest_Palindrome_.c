#include <bits/stdc++.h>
using namespace std;
int palindrome(int a)
{
    int rem,z=a,s=0;
    while(a>0)
    {
        rem=a%10;
        s=s*10+rem;
        a=a/10;
    }
    if(s==z)
    return true;
    else
    return false;
}
int main()
{
    int n,af,be,rem,s;
    cin>>n;
    for(int i=n+1;;i++)
    {
        if(palindrome(i))
        {
            af=i;
            break;
        }
    }
    for(int i=n-1;;i--)
    {
        if(palindrome(i))
        {
            be=i;
            break;
        }
    }
    if(n-be==af-n)
    cout<<be<<" "<< af;
    else if(n-be<af-n)
    cout<<be;
    else
    cout<<af;
}