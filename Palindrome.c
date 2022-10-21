#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,rem,s=0;
    cin>>n;
    a=n;
    while(n>0)
    {
        rem=n%10;
        s=s*10+rem;
        n=n/10;
    }
    if(a==s)
    cout<<"True";
    else
    cout<<"False";
}
