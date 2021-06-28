#include<bits/stdc++.h>

using namespace std;

int v,e,u,x,y;
bool chuaxet[1005] = {true};
vector<int> List[1005];

void input(){
    memset(chuaxet, true, sizeof(chuaxet));
    for(int i=0; i< 1005; i++) List[i].clear();
    cin>>v>>e>>u;
    for(int i=1; i<=e; i++){
        cin>>x>>y;
        List[x].push_back(y);
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u] = false;
    cout<<u<<" ";

    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(int i = 0; i< List[x].size(); i++){
            int v = List[x][i];
            if(chuaxet[v]){
                q.push(v);
                chuaxet[v] = false;
                cout<<v<<" ";
            }
        }
    }
}

void solve(){
    BFS(u);
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