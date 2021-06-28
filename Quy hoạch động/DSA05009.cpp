#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n , a[101], L[10001] = {0};
void input(){
    cin>>n;
    for(int i = 1; i<=n ; i++) cin>>a[i];
}

void solve(){
    memset(L, 0, sizeof(L));
    L[0] = 1;
    int sum = 0;
    for(int i = 1; i<=n ; i++) sum += a[i];
    if(sum%2 != 0 ){
        cout<< "NO\n";
        return;
    }
    int k = sum/2;
    for(int i = 1; i<=n ; i++){
        for(int j = k/2; j>=a[i] ; j--){
            // cout<<a[i]<<" "<<j<<" "<<L[j]<<"\n";
            if(L[j] == 0 && L[j-a[i]] == 1) {L[j] = 1;}
        }
    }
    cout<<(L[k/2] ? "YES" : "NO")<<"\n";
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