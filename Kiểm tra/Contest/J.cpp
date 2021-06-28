#include<bits/stdc++.h>

using namespace std;

int n, m, a[101];

void input(){
    cin >> n >> m;
    for(int i = 0; i < n; i++ ) cin>>a[i];
}

void solve(){
    int result = 0;
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                int sum = a[i]+a[j]+a[k];
                if(sum<=m) result=max(result, sum);
            }
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