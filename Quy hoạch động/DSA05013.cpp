#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll m = 1e9+7;

int n, k;
void input(){
    cin>>n>>k;
}

void solve(){
    vector<ll> F(n+1,0);
    F[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = i -1; j>= max(i-k, 0); j-- )
            F[i] = (F[i] + F[j])%m;
    }
    cout<<F[n]<<"\n"; 
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}