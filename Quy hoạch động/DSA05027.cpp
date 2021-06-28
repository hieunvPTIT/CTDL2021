#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n,v;
ll a[1001], c[1001], x[1001][1001] = {0};
void input(){
    cin>>n>>v;
    for(int i = 1; i<= n; i++) cin>>a[i];
    for(int i = 1; i<= n; i++) cin>>c[i];
}

void solve(){
    memset(x, 0, sizeof(x));
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= v; j++){
            x[i][j] = x[i-1][j];
            if(a[i] <= j && x[i-1][j-a[i]] + c[i] > x[i-1][j])
                x[i][j] = x[i-1][j-a[i]] + c[i];
        }
    }
    cout<<x[n][v]<<"\n"; 
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