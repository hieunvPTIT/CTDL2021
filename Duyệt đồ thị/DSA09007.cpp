#include<bits/stdc++.h>

using namespace std;

int V,E,u,v,x,y, check=0;
bool chuaxet[1005] = {true};
vector<int> List[1005];
int truoc[1005];

void input(){
    check=0;
    memset(chuaxet, true, sizeof(chuaxet));
    for(int i=0; i<1005; i++) List[i].clear();
    cin>>V>>E>>u>>v;
    for(int i=1; i<=E; i++){
        cin>>x>>y;
        List[x].push_back(y);
        List[y].push_back(x);
    }
}

void BFS(int u, int v){
    queue<int> q;
    q.push(u);
    chuaxet[u] = false;

    while(!q.empty()){
        int x = q.front(); q.pop();

        for(int i=0; i<List[x].size(); i++){
            int t = List[x][i];
            if(chuaxet[t]){
                chuaxet[t] = false;
                truoc[t] = x;
                q.push(t);
                if(t==v){
                    check=1;
                    return;
                }
            }
        }        
    }
}

void induongdi(){
    stack<int> s;
    s.push(v);
    
    while (s.top() != u){
        int t = s.top();
        s.push(truoc[t]);
    }
    
    while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

void solve(){
    BFS(u,v);
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