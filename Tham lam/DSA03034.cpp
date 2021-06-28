#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n,m,k;
vector<ll> x;
map<ll, int> y;
void input(){
    y.clear();
    x.clear();
    cin>>n>>m>>k;
    ll temp;
    for(int i =0; i<n+m+k; i++){
        cin>>temp;
        if(i<n) y[temp] = 1;
        if(i<n+m && i>=n && y[temp]) y[temp] = 2;
        if(i<n+m+k && i>=n+m && y[temp]==2) x.push_back(temp);
    }
}

void solve(){
    if(x.size()==0) cout<<"NO";
    else for(int i =0; i< x.size(); i++) cout<<x[i]<<" ";
    cout<<"\n";
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