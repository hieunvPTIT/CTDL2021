#include<bits/stdc++.h>

using namespace std;

int n, m, u, x,y;
bool chuaxet[1005];
vector<int> List[1005];

void input(){
    memset(chuaxet, true, sizeof(chuaxet));
    for(int i=0; i<1005; i++) List[i].clear();
    cin>>n>>m>>u;
    for(int i =1; i<=m; i++){
        cin>>x>>y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}

void DFS(int u){
    chuaxet[u] = false;
    cout<<u<<" ";
    for(int i=0; i<List[u].size(); i++){
        int v = List[u][i]; 
        if(chuaxet[v]) DFS(v);
    }
}

void solve(){
    DFS(u);
    cout<<"\n";
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