#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=n;j>=n+1-i;j--)
        {
            cout<<char(64+i)<<" ";
        }
        cout<<'
';
    }
}