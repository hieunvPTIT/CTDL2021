#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll m = 1e9+7;
int n, k;
void input(){
    cin>>n>>k;
}

void solve(){
    if(n<k){
        cout<<"0\n";
        return;
    }
    ll result = 1;
    for(int i = n-k+1; i<= n; i++)
        result=result*i%m;
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