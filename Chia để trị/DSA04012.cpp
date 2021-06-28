#include<bits/stdc++.h>

using namespace std;

int m, n, P[105], Q[105], x[205] = {0};
void input(){
    cin >>m >> n;
    for(int i = 0; i<m; i++) cin >> P[i];
    for(int i = 0; i<n; i++) cin >> Q[i];
}

void solve(){
    memset(x, 0, sizeof(x));
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++) x[i+j] += P[i]*Q[j];
    }
    for(int i = 0; i<m+n-1; i++) cout<<x[i]<<" ";
    cout<<"\n";
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