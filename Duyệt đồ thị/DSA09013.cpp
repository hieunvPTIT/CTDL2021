#include<bits/stdc++.h>

using namespace std;

int V,E,x,y;
bool chuaxet[1005] = {true};
vector<int> List[1005];

void input(){
    memset(chuaxet, true, sizeof(chuaxet));
    for(int i=0; i<1005; i++) List[i].clear();
    cin>>V>>E;
    for(int i=1; i<=E; i++){
        cin>>x>>y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}

void DFS(int u){
    chuaxet[u] = false;
    for(int i=0; i<List[u].size(); i++){
        int v=List[u][i];
        if(chuaxet[v]) DFS(v);
    }
}

void solve(){
    for(int i=1; i<=V; i++){
        for(int u=0; u<List[i].size(); u++){
            memset(chuaxet, true, sizeof(chuaxet));
            int j = List[i][u];

            List[i].erase(List[i].begin() + u);

            DFS(i);

            int check=0;
            for(int k=1; k<=V; k++) if(chuaxet[k]) check=1;
            if(check && i<j) cout<<i<<" "<<j<<" ";

            List[i].insert(List[i].begin() + u, j);
        }
    }
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