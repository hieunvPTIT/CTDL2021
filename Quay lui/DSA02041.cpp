#include<iostream>
#include <algorithm>

using namespace std;

int n, result = 0;

void input(){
    cin >> n;
}

void Try(int a, int ans){
    if(a==1) {result=min(ans,result); return;}
    // cout<<a<<" "<<ans<<" "<<result<<"\n";
    ans++;
    if(a%2==0) Try(a/2, ans);
    if(a%3==0) Try(a/3, ans);
    Try(a-1, ans);
}

void solve(){
    result=n;
    Try(n, 0);
    cout<<result<<"\n";
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