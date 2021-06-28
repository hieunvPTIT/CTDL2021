#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int n;
ll a[1000005], b[1000005];
void input(){
    cin>>n;
    for(int i = 1; i<=n ; i++) cin>>a[i];
}

void solve(){
    ll result = max(a[1], a[2]);
    b[1] = a[1]; b[2] = a[2];
    for(int i = 3; i<=n ; i++){
        b[i] = a[i] + b[i-2];
        b[i-1] = max(b[i-1], b[i-2]);
        result = max(result, b[i]);
    }
    cout<<result<<"\n"; 
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