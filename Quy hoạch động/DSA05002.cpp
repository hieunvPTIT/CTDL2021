#include<bits/stdc++.h>

using namespace std;

int a[101][101];
int n;
string x;
void input(){
    cin>>n>>x;
}

void solve(){
    memset(a, 0, sizeof(a));
    x=' ' + x;
    for(int i = 1; i<=n ; i++){
        for(int j = 1; j<=n ; j++) {
            if(x[i] == x[j] && i != j ) a[i][j] = a[i-1][j-1] + 1;
            else a[i][j] = max(a[i][j-1],a[i-1][j]);
            // cout<<a[i][j]<<" "; 
        }
        // cout<<"\n"; 
    }
    cout<<a[n][n]<<"\n"; 
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