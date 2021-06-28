#include<bits/stdc++.h>

using namespace std;

int n;
void input(){
    cin>>n;
}

void solve(){
    string result;
    // n = 4a+ 7b; 0<= a <= n/4; 0<=b<= n/7
    int a=0,b=0;
    for(int i = 0; i<=n/4; i++){
        if((n-4*i)%7 == 0){
            a=i; b=(n-4*i)/7;
            while(a--) cout<<4;
            while(b--) cout<<7;
            cout<<"\n"; 
            return;
        }
    }
    cout<<-1<<"\n"; 
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