#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, k , a[201], L[40001] = {0};
void input(){
    cin>>n>>k;
    for(int i = 1; i<=n ; i++) cin>>a[i];
}

void solve(){
    memset(L, 0, sizeof(L));
    L[0] = 1;
    for(int i = 1; i<=n ; i++){
        for(int j = k; j>=a[i] ; j--){
            // cout<<a[i]<<" "<<j<<" "<<L[j]<<"\n";
            if(L[j] == 0 && L[j-a[i]] == 1) {L[j] = 1;}
        }
    }
    cout<<(L[k] ? "YES" : "NO")<<"\n";
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