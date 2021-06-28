#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n,v;
ll a[101], x[101][25001] = {0};
void input(){
    cin>>v>>n;
    for(int i = 1; i<= n; i++) cin>>a[i];
}

void solve(){
    memset(x, 0, sizeof(x));
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<= v; j++){
            x[i][j] = x[i-1][j];
            if(a[i] <= j && x[i-1][j-a[i]] + a[i] > x[i-1][j])
                x[i][j] = x[i-1][j-a[i]] + a[i];
        }
    }
    cout<<x[n][v]<<"\n"; 
}

int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}