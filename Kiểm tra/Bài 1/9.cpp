#include<iostream>
#include <algorithm>

using namespace std;

int n, check = 0, ans;
long long k, a[35], b[35];

void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
}

void printArr(){
    long long sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        sum += a[i]*b[i];
        if(b[i]) count++;
    }
    if(sum==k){
        check = 1;
        ans = ans < count ? ans : count;
    }
}

void Try(int i){
    int j;
    for(int j = 1; j >= 0; j--){
        b[i] = j;
        if(i==n-1) printArr();
        else Try(i+1);
    }
}

void solve(){
    check=0;
    ans=n;
    Try(0);
    if(!check) cout<<"-1";
    else cout<<ans;
    cout<<"\n";
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