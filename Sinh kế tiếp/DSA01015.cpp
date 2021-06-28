#include<iostream>
#include<vector>

using namespace std;

typedef long long ll;

int n, k=15;
string x;
vector<ll> a;

void input(){
    cin >> n;
}

void add(){
    ll b = 0;
    for(int i = 0; i < k; i++ ){
        b = 10*b + (x[i] - '0');
    }
    cout<<b<<" ";
    a.push_back(b);
}

void Try(int i){
    for(int j = 0; j <= 1; j++ ){
        x[i] = j ? '9' : '0';
        if(i==k-1) add();
        else Try(i+1);
    }
}

void solve(){
    for(int i = 1; i<= a.size(); i++){
        if(a[i] % n == 0){
            cout<<a[i]<<"\n";
            return;
        }
    }
};

int main(){
    x.resize(k);
    Try(0);
    int t = 1;
    cin >> t; 
    while(t--){
        input();
        solve();
    }
    return 0;
}