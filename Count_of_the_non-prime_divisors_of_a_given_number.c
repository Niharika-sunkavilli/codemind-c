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
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            //cout<<i<<" - ";
            if(prime(i))
            {
            continue;
            }
            else
            {
                c++;
                //cout<<i<<" ";
            }
        }
    }
    cout<<c;
}