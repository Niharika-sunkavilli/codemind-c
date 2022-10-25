#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=1,c,count=2;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    while(count < n)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        count++;
    }
}