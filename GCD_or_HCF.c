#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,min,gcd;
    cin>>a>>b;
    if(a<b)
    min=a;
    else
    min=b;
    for(int i=min;i>0;i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
            cout<<gcd;
            break;
        }
    }
}