#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=0,b=1,c;
    if((a==n) or (b==n)) cout << "True";
    else{
    while(true){
        c=a+b;
        if(c==n){
            cout << "True";
            break;
    }
    else if(c>n){
        cout << "False";
        break;
    }
    a=b;
    b=c;
}
}
}