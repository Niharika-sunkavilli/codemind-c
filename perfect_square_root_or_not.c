#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sq,a;
    cin>>n;
    sq=int(sqrt(n));
    a=sq*sq;
    if(a==n)
    cout<<"True";
    else
    cout<<"False";
}
