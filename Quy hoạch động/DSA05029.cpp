#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

string n;
int F[41]={0};
void input(){
    cin>>n;
}

void solve(){
    memset(F, 0, sizeof(F));
    if(n[0]=='0'){
        cout<<0<<"\n";
        return;
    }
    F[0] = 1; F[1] = 1;
    // nếu n[i] != 0 || n[i-1] n[i] > 26  F[i] = F[i-1]
    // nếu 1<= n[i-1] n[i] <= 26  F[i] = F[i-1] + F[i-2]
    for(int i = 2; i <= n.size(); i++) {
        if(n[i-1]!='0') F[i] = F[i-1];
        if(n[i-2] == '1' || (n[i-2] == '2' && n[i-1] < '7')) F[i] += F[i-2];
    }
    cout<<F[n.size()]<<"\n"; 
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