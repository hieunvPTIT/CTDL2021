#include<bits/stdc++.h>

using namespace std;

int n, k, a[41], b[41] = {0}, ans = 0;

void input(){
    memset(b, 0, sizeof(b));
    cin >> n >> k;
    for(int i = 1; i <= k; i++ ) {
        cin>>a[i];
        b[a[i]] = 1;
    }
}

void solve(){
    ans=0;
    int i = k;
    while(i>=1 && a[i] == n-k+i) i--;
    if(i==0) cout<<k<<"\n";
    else{
        a[i]++;
        for(int j = i+1; j<=k; j++) a[j] = a[j-1] + 1;
        for(int i = 1; i <= k; i++) if(!b[a[i]]) ans++;
        cout<<ans<<"\n";
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