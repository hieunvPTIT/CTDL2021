#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n;
void input(){
    cin>>n;
}

void solve(){
    queue<ll > q;
    q.push(1);\
    while (1)
    {
        ll x = q.front(); 
        q.pop();
        if(x%n==0){
            cout<<x<<"\n";
            break;
        }
        q.push(10*x);
        q.push(10*x+1);
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