#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,lcm,max;
    cin>>a>>b;
    if(a>b)
    max=a;
    else
    max=b;
    for(int i=max;;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            cout<<lcm;
            break;
        }
    }
    
}