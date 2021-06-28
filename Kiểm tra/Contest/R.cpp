#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int m,n, a[1001][1001], visited[1001][1001] = {0};

void input(){
    cin >>m>> n;
    for(int i = 1; i<=m; i++){
        for(int j =1; j<=n; j++) cin>>a[i][j];
    }
}

void solve(){
    memset(visited, 0, sizeof(visited));
    queue<pair<pair<int, int>, int> > s;
    s.push(make_pair(make_pair(1,1), 0));
    visited[1][1] = 1;
    while (!s.empty())
    {
        pair<pair<int, int>, int> x = s.front();
        s.pop();

        int i = x.first.first;
        int j = x.first.second;
        int k = a[i][j];
        int count = x.second;

        if(i==m && j==n){
            cout<<count<<"\n";
            return;
        }

        if(!visited[i][j+k] && j+k <= n){
            visited[i][j+k] = 1;
            s.push(make_pair(make_pair(i,j+k), count+1));
        }

        if(!visited[i+k][j] && i+k <= m){
            visited[i+k][j] = 1;
            s.push(make_pair(make_pair(i+k,j), count+1));
        }
    }
    cout<<-1<<"\n";
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