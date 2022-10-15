#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    float area,s;
    cin>>a>>b>>c;
    s=(float)(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<fixed<<setprecision(2)<<area;
}