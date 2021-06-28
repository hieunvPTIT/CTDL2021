#include<bits/stdc++.h>

using namespace std;

int a[101][101][101];
string x, y, z;
int m,n,o;
void input(){
    cin>>m>>n>>o;
    cin>>x>>y>>z;
}

void solve(){
    memset(a, 0, sizeof(a));
    x=' ' + x;
    y=' ' + y;
    z=' ' + z;
    for(int i = 1; i<=m ; i++){
        for(int j = 1; j<=n ; j++) {
            for(int k = 1; k<=o; k++){
                if(x[i] == y[j] && y[j] == z[k]) a[i][j][k] = a[i-1][j-1][k-1] + 1;
                else a[i][j][k] = max(a[i-1][j][k],max(a[i][j-1][k],a[i][j][k-1]));
            }   
        }
    }
    cout<<a[m][n][o]<<"\n"; 
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}