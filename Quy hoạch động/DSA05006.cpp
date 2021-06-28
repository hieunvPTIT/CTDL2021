#include<bits/stdc++.h>

using namespace std;

int n, a[1005], b[1005];
void input(){
    cin>>n;
    for(int i = 1; i<=n ; i++) cin>>a[i];
}

void solve(){
    int result = 0;
    for(int i = 1; i<=n ; i++){
        b[i] = a[i];
        for(int j = 1; j< i ; j++) 
            if(a[j] < a[i]) b[i] = max(b[i], b[j] + a[i]);
        result = max(result, b[i]);
    }
    cout<<result<<"\n"; 
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