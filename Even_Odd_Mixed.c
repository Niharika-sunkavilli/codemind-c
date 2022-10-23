#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,rem,e=0,o=0;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        c++;
        n=n/10;
        if(rem%2==0)
        e++;
        else
        o++;
    }
    if(c==e)
    cout<<"Even";
    else if(c==o)
    cout<<"Odd";
    else
    cout<<"Mixed";
}