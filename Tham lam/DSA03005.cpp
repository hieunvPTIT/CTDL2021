#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, k;
vector<int> a;
void input(){
    cin>>n>>k;
    a.resize(n);
    for(int i = 0; i< n; i++) cin>>a[i];
}

void solve(){
    sort(a.begin(), a.end());
    ll x = 0, y= 0;
    k = min(k, n-k);
    for(int i = 0; i< k; i++) x += a[i];
    for(int i = k; i< n; i++) y += a[i];
    cout<<y-x<<"\n"; 
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