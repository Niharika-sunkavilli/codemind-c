#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int c=0;
    if(n<=1)
    return false;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==0)
    return true;
    else
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,af,bf;
        cin>>n;
        for(int i=n;;i++)
        {
            if(prime(i))
            {
                af=i;
                break;
            }
        }
        for(int i=n;;i--)
        {
            if(prime(i))
            {
                bf=i;
                break;
            }
        }
        if(n-bf <= af-n)
        cout<<bf<<'
';
        else
        cout<<af<<'
';
        
        t--;
    }
}