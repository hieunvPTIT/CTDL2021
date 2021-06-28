#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

string n, m;
int a[1001][1001] = {0};

void input(){
    cin >> n >> m;
}

void solve(){
    memset(a, 0, sizeof(a));
    n=' ' + n;
    m=' ' + m;
    for(int i = 1; i< n.size(); i++){
        for(int j = 1; j<m.size(); j++){
            if(n[i] == m[j]) a[i][j] = a[i-1][j-1] + 1;
            else a[i][j] = max(a[i-1][j], a[i][j-1]);
        }
    }
    cout<<a[n.size()-1][m.size()-1]<<"\n";
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