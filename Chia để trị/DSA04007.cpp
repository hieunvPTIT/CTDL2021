#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int k;
string a, b;
void input(){
    cin>>k>>a>>b;
}

void solve(){
    ll n = 0, m = 0;
    for(int i=0; i<a.length(); i++) n = n*k + (a[i] -'0'); 
    for(int i=0; i<b.length(); i++) m = m*k + (b[i] -'0');

    ll result = n + m;
    vector<int> ans;

    while (result>0)
    {
        ans.push_back(result%k);
        result /= k;
    }

    for(int i= ans.size() - 1; i>= 0; i--) cout<<ans[i];
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