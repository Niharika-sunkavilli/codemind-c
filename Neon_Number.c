#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sq,rem,s=0;
    cin>>n;
    sq=n*n;
    while(sq>0)
    {
        rem=sq%10;
        s=s+rem;
        sq=sq/10;
    }
    if(n==s)
    cout<<"Neon Number";
    else
    cout<<"Not Neon Number";
}
