#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll m = 1e9 + 7;

int n;
vector<int> a;
void input(){
    cin>>n;
    a.resize(n);
    for(int i = 0; i< n; i++) cin>>a[i];
}

void solve(){
    sort(a.begin(), a.end());
    int result = 0;
    for(int i = 0; i< n; i++) result = (result + (a[i]*i%m))%m;
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