#include<iostream>

using namespace std;

int m, n, a[105][105], check =0, ans = 0; 

void input(){
    cin >> m >> n;
    for(int i=0; i<m; i++){
        for(int j =0; j<n; j++) cin>>a[i][j];
    }
}

void Try(int i, int j, int k){
    if(k==m+n-1){ ans++; return; }

    if(i+1 < m) Try(i+1, j, k+1);

    if(j+1 < n) Try(i, j+1, k+1);
}

void solve(){
    ans=0;
    Try(0,0,1);
    cout<<ans<<"\n";
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