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

void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;

    while (!q.empty()){
        int x = q.front(); q.pop();

        for(int i=0; i<List[x].size(); i++){
            int t=List[x][i];
            if(chuaxet[t]){
                chuaxet[t] = false;
                q.push(t);
            }
        }
    }
    
}

void solve(){
    int result=0;
    for(int i=1; i<=V; i++){
        if(chuaxet[i]){
            BFS(i);
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