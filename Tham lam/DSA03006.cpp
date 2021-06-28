#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
vector<int> a;
void input(){
    cin>>n;
    a.resize(n);
    for(int i = 0; i< n; i++) cin>>a[i];
}

void solve(){
    for(int i = 0; i< n/2; i++) if(a[i] > a[n-i-1]) swap(a[i],a[n-i-1]);
    int check = 1;
    for(int i = 0; i< n-1; i++) if(a[i] > a[i+1]) check = 0; 
    cout<<(check ?  "Yes" : "No")<<"\n"; 
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