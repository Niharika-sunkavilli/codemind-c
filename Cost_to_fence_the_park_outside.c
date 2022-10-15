#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,b,w,c,a;
    cin>>l>>b>>w>>c;
    a=((l+2*w)*(b+2*w)-(l*b))*c;
    cout<<a;
}
//l+2w * b+2w * -l*b  * C