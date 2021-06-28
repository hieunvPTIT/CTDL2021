#include<bits/stdc++.h>

using namespace std;

int n,k;
vector<int> a;
void input(){
    cin >> n>>k;
    a.resize(n);
    for(int i = 0; i<n; i++) cin >> a[i];
}

void solve(){
    if(k<a[0]) {cout<<-1<<"\n"; return;}
    int i = 0;
    while(i<n && a[i] <= k) i++;
    cout<<i<<"\n";
};

int main(){
    int t = 1;
    cin >> t; 
    while(t--){
        input();
        solve();
    }
    return 0;
}