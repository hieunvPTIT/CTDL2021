#include<bits/stdc++.h>

using namespace std;

int n, result, k;
void input(){
    cin >>n;
    result=0;
    for(int i = 0; i<n; i++) {
        cin >> k;
        result += (k==0);
    }
}

void solve(){
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