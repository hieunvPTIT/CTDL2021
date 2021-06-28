#include<bits/stdc++.h>

using namespace std;

int n,m,a[105][105],u,v,c,q;

void input(){
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j) a[i][j] = 0;
            else a[i][j] = 1e9;
        }
    }
    for(int i=1; i<=m; i++){
        cin>>u>>v>>c;
        a[u][v] = a[v][u] = c;
    }
}

void solve(){
    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(a[i][j] > a[i][k] + a[k][j])
                    a[i][j] = a[i][k] + a[k][j];
            }
        }
    }
    cin>>q;
    while(q--){
        cin>>u>>v;
        cout<<a[u][v]<<"\n";
    }
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