#include<bits/stdc++.h>

using namespace std;

int v,e,u,x,y;
bool chuaxet[1005] = {true};
vector<int> List[1005];

void input(){
    memset(chuaxet, true, sizeof(chuaxet));
    for(int i=0; i<1005; i++) List[i].clear();
    cin>>v>>e>>u;
    for(int i = 1; i <= e; i++){
        cin>>x>>y;
        List[x].push_back(y);
    }
}

void DFS(int u){
    chuaxet[u] = false;
    cout<<u<<" ";
    for(int i=0; i< List[u].size(); i++){
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