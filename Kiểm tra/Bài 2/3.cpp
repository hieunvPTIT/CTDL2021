#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll m = 1e9+7;

int n, k, a[100001]={0};

void input(){
    cin >> n >> k;
}

void solve(){
    memset(a, 0, sizeof(a));
    a[0] = 1;
    for(int i = 1; i<= n; i++){
        for(int j = i-1; j>= max(i-k, 0); j--){
            a[i] = (a[i]+a[j])%m;
        }
    }

    cout<<a[n]<<"\n";
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