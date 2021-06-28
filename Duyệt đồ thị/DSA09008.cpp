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
        int x=List[u][i];
        if(chuaxet[x]) DFS(x);
    }
}

void solve(){
    int result=0;
    for(int i=1; i<=V; i++){
        if(chuaxet[i]){
            DFS(i);
            result++;
        }
    }
    cout<<result<<"\n";
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