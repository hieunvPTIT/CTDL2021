#include<iostream>

using namespace std;

int n, k, a[100], b[100], ans = 0;

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++ ) cin>>a[i];
}

void print(){
    int sum = 0;
    for(int i = 0; i < n; i++) sum+=a[i]*b[i];
    if(sum==k){
        ans++;
        for(int i = 0; i < n; i++) if(b[i]) cout<<a[i]<<"                    ";
        cout<<"\n"; 
    }
    
}

void Try(int i){
    for(int j = 0; j <= 1; j++ ){
       b[i] = j;
       if(i==n-1) print();
       else Try(i+1);
    }
}

void solve(){
    Try(0);
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