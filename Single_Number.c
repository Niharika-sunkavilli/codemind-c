#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        c=1;
        if(arr[i]!=-99)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    arr[j]=-99;
                    c++;
                }
            }
            if(c==1)
            {
                cout<<arr[i];
                
            }
        }
    }
}