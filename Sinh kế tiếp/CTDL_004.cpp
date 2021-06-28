#include<iostream>

using namespace std;

int n, k,a[105], b[105], ans;

void input(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin>>a[i];
}

void print(){
    int check = 1;
    for(int i = 1; i < k; i++){
        if(a[b[i]] >= a[b[i+1]]) check = 0;
    }
    if(check) ans++;
}

void Try(int i){
    int j;
    for(int j = b[i-1]+1; j <= n-k+i; j++ ){
        b[i] = j;
        if(i==k) print();
        else Try(i+1);
    }
}

void solve(){
    Try(1);
    cout<<ans<<"\n";
};

int main(){
    int t = 1;
    // cin >> t; 
    while(t--){
        input();
        solve();
    }
    return 0;
}