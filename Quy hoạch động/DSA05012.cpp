#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll m = 1e9+7;
int n, k;
ll a[1005][1005] = {0};
void input(){
    cin>>n>>k;
}

void solve(){
    cout<<a[n+1][k+1]<<"\n";
}

int main(){
    int t = 1;
    cin>>t;
    a[1][1] = 1;
    for(int i = 2; i <= 1000; i++) {
        for(int j = 1; j <= i; j ++ ){
            a[i][j] = (a[i-1][j] + a[i-1][j-1]) % m ;
        }
    }
    while(t--){
        input();
        solve();
    }
    return 0;
}