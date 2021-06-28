#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
vector<int> a;
void input(){
    cin>>n;
    a.resize(n);
    for(int i = 0; i< n; i++) cin>>a[i];
}

void solve(){
    sort(a.begin(), a.end());
    ll x = 0, y= 0;
    for(int i = 0; i< n; i+=2) x = 10*x + a[i];
    for(int i = 1; i< n; i+=2) y = 10*y + a[i];
    cout<<x+y<<"\n"; 
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