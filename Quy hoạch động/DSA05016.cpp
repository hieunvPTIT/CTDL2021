#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n;
vector<ll> a;
void input(){
    cin>>n;
}

void solve(){
    cout<<a[n-1]<<"\n";
}

int main(){
    int t = 1;
    cin>>t;

    for(int i = 0; i <= 40; i++){
        for(int j = 0; j<= 25; j++){
            for(int k = 0; k <= 15; k++){
                ll x = pow(2,i)*pow(3,j)*pow(5,k);
                if(1 <= x && x<= LLONG_MAX) a.push_back(x);
            }
        }
    }

    sort(a.begin(), a.end());

    // for(int i =0; i<a.size(); i++) cout<<a[i]<<" ";

    while(t--){
        input();
        solve();
    }
    return 0;
}