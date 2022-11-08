#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,rem,rev=0,sq;
    cin>>n;//12
    sq=n*n;//144
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    int a,sq2,rem2,rev2=0;
    a=rev;//21
    sq2=a*a;//441
    while(sq2>0)
    {
        rem2=sq2%10;
        rev2=rev2*10+rem2;
        sq2=sq2/10;
    }
    if(rev2==sq)
    cout<<"True";
    else
    cout<<"False";
    
}
