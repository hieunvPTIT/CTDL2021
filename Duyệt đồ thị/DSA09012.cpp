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
        memset(chuaxet, true, sizeof(chuaxet));
        chuaxet[i] = false;
        if(i==1) DFS(2);
        else DFS(1);

        int check=0;
        for(int j=1; j<=V; j++) if(chuaxet[j]) check=1;
        if(check) cout<<i<<" ";
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