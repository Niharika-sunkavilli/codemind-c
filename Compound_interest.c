#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,t,r,ci;
    cin>>p>>t>>r;
    ci=p*(pow((1+(t/100)),r));
    cout<<fixed<<setprecision(2)<<ci;
}