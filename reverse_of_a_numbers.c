#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,rem;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        s=s*10+rem;
        n=n/10;
    }
    cout<<s;
    
}
