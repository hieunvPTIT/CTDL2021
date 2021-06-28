#include<bits/stdc++.h>

using namespace std;

int V,E,u,v,x,y,q, check=0;
bool chuaxet[1005] = {true};
vector<int> List[1005];

void input(){
    for(int i =0; i<1005; i++) List[i].clear();
    cin>>V>>E;
    for(int i =1; i<= E; i++){
        cin>>x>>y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}

void DFS(int u, int v){
    chuaxet[u]=false;
    if(u==v){
        check=1;
        return;
    }   for(int i=0; i<List[u].size(); i++){
        int t = List[u][i];
        if(chuaxet[t]) DFS(t, v);
    }
}

void solve(){
    cin>>q;
    while(q--){
        cin>>u>>v;
        check=0;
        memset(chuaxet, true, sizeof(chuaxet));
        DFS(u, v);
        if(check) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
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