#include<bits/stdc++.h>

using namespace std;

int n, a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void input(){
    cin>>n;
}

void solve(){
    int ans = 0;
    for(int i = 9; i>=0; i--){
        if(n==0) break;
        while(a[i] <= n){
            n-=a[i];
            ans++;
        }
    }
    cout<<ans<<"\n";
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