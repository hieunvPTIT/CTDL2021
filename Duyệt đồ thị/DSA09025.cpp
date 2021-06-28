#include<bits/stdc++.h>

using namespace std;

int V,E,u,v,x,y, check=0;
bool chuaxet[1005] = {true};
vector<int> List[1005];
int truoc[1005];

void input(){
    check=0;
    memset(chuaxet, true, sizeof(chuaxet));
    for(int i =0; i<1005; i++) List[i].clear();
    cin>>V>>E>>u>>v;
    for(int i =1; i<= E; i++){
        cin>>x>>y;
        List[x].push_back(y);
    }
}

void DFS(int u){
    chuaxet[u]=false;
    if(u==v){
        check=1;
        return;
    }
    // cout<<u<<" ";
    for(int i=0; i<List[u].size(); i++){
        int t = List[u][i];
        if(chuaxet[t]) {
            truoc[t] = u;
            DFS(t);
        }
    }
}

void induongdi(){
    stack<int> s;
    s.push(v);
    while(s.top() != u){
        int t = s.top();
        s.push(truoc[t]);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

void solve(){
    DFS(u);
    if(check) induongdi();
    else cout<<-1<<"\n";
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