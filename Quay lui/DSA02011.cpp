#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, check = 0, result;
ll k, a[35];

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
}

void Try(int i, ll sum, int ans){
    if(sum==k) {
        check=1;
        result=min(ans, result);
        return;
    }
    int j = i+1;
    while(sum+a[j] <= k && j<n ){
        Try(i+1, sum+a[j], ans+1);
        j++;
    }
}

void solve(){
    result=n;
    check=0;
    Try(-1,0,0);
    if(!check) cout<<"-1";
    else cout<<result;
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