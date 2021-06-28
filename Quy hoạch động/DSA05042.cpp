#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
ll k, a[100005];
void input(){
    cin>>n>>k;
    for(int i = 0; i< n; i++) cin>>a[i];
}

void solve(){
    for(int i = 0; i< n; i++){
        ll sum = 0;
        for(int j = i; j< n; j++){
            sum+=a[j];
            if(sum==k){
                cout<<"YES"<<"\n"; 
                return;
            } 
        }
    }
    cout<<"NO"<<"\n"; 
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