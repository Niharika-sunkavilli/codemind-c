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
        {
            c++;
        }
    }
    if(c==0)
    return true;
    else
    return false;
}
int main()
{
    int n,rem,c=0,pc=0;
    cin>>n;
    if(prime(n))
    {
        while(n>0)
        {
            c++;
            rem=n%10;
            if(prime(rem))
            {
                pc++;
            }
            n=n/10;
            
        }
        if(c==pc)
        cout<<"Mega Prime";
        else
        cout<<"Not Mega Prime";
    }
    else
    cout<<"Not Mega Prime";
}