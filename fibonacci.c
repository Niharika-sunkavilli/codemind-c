#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=2,a=0,b=1,c;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    while(count<n)
    {
        c=a+b;
        a=b;
        b=c;
        count++;
        cout<<c<<" ";
    }
}
