#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,pro=1,sum=0,rem;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }
    cout<<abs(pro-sum);
}