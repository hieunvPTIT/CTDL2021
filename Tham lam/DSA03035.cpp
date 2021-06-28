#include<bits/stdc++.h>

using namespace std;

int n, a[100005], b[100005];
void input(){
    cin>>n;
    for(int i = 0; i<n ; i++) cin>>a[i];
}

void solve(){
    int result = 0;
    for(int i = 0; i<n-1 ; i++){
        if(a[i] > a[i+1]) result++;
    }
    cout<<result<<"\n"; 
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