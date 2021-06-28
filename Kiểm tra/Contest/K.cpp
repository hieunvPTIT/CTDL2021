#include<bits/stdc++.h>

using namespace std;

int n, k, b[9];
string a[9];

int castToInt(string x){
    int number = 0;
    for(int i =0; i<x.size(); i++) number = 10*number + (x[i] - '0');
    return number;
}

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++ ) {
        cin>>a[i];
        b[i] = castToInt(a[i]);
    }   
}

void solve(){
    sort(b, b+n);
    cout<<b[n-1] -b[0];
};

int main(){
    int t = 1;
    // cin >> t; 
    while(t--){
        input();
        solve();
    }
    return 0;
}