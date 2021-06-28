#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a, b;
void input(){
    cin >>n;
    a.resize(n);
    b.resize(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n-1; i++) cin >> b[i];
}

void solve(){
    for(int i = 0; i<n-1; i++){
        if(a[i] != b[i]) {
            cout<<i+1<<"\n";
            return;
        }
    }
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