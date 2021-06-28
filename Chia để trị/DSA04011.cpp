#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

string a, b;
void input(){
    cin >>a >> b;
}

void solve(){
    ll n = 0, m = 0;
    for(int i=0; i<a.length(); i++) n = n*2 + (a[i] -'0'); 
    for(int i=0; i<b.length(); i++) m = m*2 + (b[i] -'0');

    cout<<n*m<<"\n";
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