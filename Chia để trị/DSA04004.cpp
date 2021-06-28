#include<bits/stdc++.h>

using namespace std;

int n;
long long k;

void input(){
    cin >> n >> k;
}

int find(int n, long long k){
    long long mid = pow(2,n-1);
    // cout<< n << " "<< k<< " " << mid << "\n";
    if(n==1) return 1;
    if(k==mid) return n;
    else if(k<mid) return find(n-1,k);
    else return find(n-1,k-mid);
}

void solve(){
    cout << find(n,k) << "\n";
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