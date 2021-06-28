#include<bits/stdc++.h>

using namespace std;

int n, a[105];
void input(){
    cin >> n;
    for(int i = 0; i<n; i++) cin >> a[i];
}

void solve(){
    int result = 0;
    for(int i = 0; i<n; i++) {
        int sum = 0;
        for(int j = i ; j < n; j++){
            sum += a[j];
            result = max(sum, result);
        }
    }
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