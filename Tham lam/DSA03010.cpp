#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, a[1000000];
void input(){
    cin>>n;
    for(int i = 0; i< n; i++) cin>>a[i];
}

void solve(){
    priority_queue<int, vector<int>, greater<int> > pq(a,a+n);
    ll result = 0;
    while (pq.size() > 1)
    {
        int a1 = pq.top(); pq.pop();
        int a2 = pq.top(); pq.pop();
        result+= a1+a2;
        pq.push(a1+a2);
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