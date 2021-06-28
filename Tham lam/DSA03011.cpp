#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll m = 1e9+7, a[2000000];
int n;
void input(){
    cin>>n;
    for(int i = 0; i< n; i++) cin>>a[i];
}

void solve(){
    priority_queue<ll, vector<ll>, greater<ll> > pq(a,a+n);
    ll result = 0;
    while (pq.size() > 1)
    {
        ll a1 = pq.top(); pq.pop();
        ll a2 = pq.top(); pq.pop();
        result= (result + a1+a2)%m;
        pq.push((a1+a2)%m);
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