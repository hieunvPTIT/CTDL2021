#include<bits/stdc++.h>

using namespace std;

int V,E,x,y, check=0;
bool chuaxet[1005] = {true};
vector<int> List[1005];

void input(){
    check=0;
    memset(chuaxet, true, sizeof(chuaxet));
    for(int i=0; i<1005; i++) List[i].clear();
    cin>>V>>E;
    for(int i=1; i<=E; i++){
        cin>>x>>y;
        List[x].push_back(y);
    }
}

void DFS(int u, int t){
    chuaxet[u] = false;
    for(int i=0; i<List[u].size(); i++){
        int v=List[u][i];
        if(v==t) check=1;
        if(chuaxet[v]) DFS(v,t);
    }
}

void solve(){
    for(int i=1; i<=V; i++){
        memset(chuaxet, true, sizeof(chuaxet));
        DFS(i,i);
        if(check){
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
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