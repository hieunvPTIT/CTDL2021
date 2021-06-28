#include<bits/stdc++.h>

using namespace std;

int n;

void input(){
    cin >> n;
}

void solve(){
    for(int i = 1; i <= n; i++) cout<<(i%2==1?0:1)<<" ";
    cout<<"\n";
    for(int i = 1; i <= n; i++) cout<<(i%2==0?0:1)<<" ";
    cout<<"\n";
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