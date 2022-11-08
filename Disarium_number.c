#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int d,c=0,x=n,n1=0;
    while(n){
        d=n%10;
        n=n/10;
        c+=1;
    }
    n=x;
    while(n){
        d=n%10;
        n=n/10;
        n1+=pow(d,c);
        c--;
    }
    if(x==n1) cout << "True";
    else cout << "False";
}
    