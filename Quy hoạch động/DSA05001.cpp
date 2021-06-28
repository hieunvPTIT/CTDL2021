#include<bits/stdc++.h>

using namespace std;

int a[1001][1001];
string x, y;
void input(){
    cin>>x>>y;
}

void solve(){
    memset(a, 0, sizeof(a));
    int m = x.size(), n = y.size();
    x=' ' + x;
    y=' ' + y;
    for(int i = 1; i<=m ; i++){
        for(int j = 1; j<=n ; j++) {
            if(x[i] == y[j]) a[i][j] = a[i-1][j-1] + 1;
            else a[i][j] = max(a[i][j-1],a[i-1][j]);
            // cout<<a[i][j]<<" "; 
        }
        // cout<<"\n"; 
    }
    cout<<a[m][n]<<"\n"; 
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