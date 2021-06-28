#include<bits/stdc++.h>

using namespace std;

int n,k, a[15], sum = 0, check = 0;

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin>>a[i];
}

void solve(){
    for(int i = 0; i < n; i++) sum+=a[i];
    sum/=k;
    cout<<sum;
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