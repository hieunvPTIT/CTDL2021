#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n,s,m;
void input(){
    cin>>n>>s>>m;
}

void solve(){
    int need = s*m;
    if(need>(s-s/7)*n) {
        cout<<-1<<"\n";
        return;
    }
    int sum = 0;
    for(int i=1; i<=s-s/7; i++){
        sum+=n;
        if(sum>=need){
            cout<<i<<"\n";
            return;
        }
    }
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