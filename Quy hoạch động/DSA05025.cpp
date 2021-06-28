#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
ll F[55];
void input(){
    cin>>n;
}

void solve(){
    F[1] = 1; F[2] = 2; F[3] = 4;
    for(int i = 4; i <= 50; i++) {F[i] = F[i-1] + F[i-2] + F[i-3];}
    cout<<F[n]<<"\n"; 
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