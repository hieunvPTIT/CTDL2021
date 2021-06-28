#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int m,n, a[10001][10001], visited[10001][10001] = {0};

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
        int count = x.second;

        if(i==m && j==n){
            cout<<count<<"\n";
            return;
        }

        if(!visited[i][j+a[i][j]]){
            visited[i][j+a[i][j]] = 1;
            s.push(make_pair(make_pair(i,j+a[i][j]), count+1));
        }

        if(!visited[i+a[i][j]][j]){
            visited[i+a[i][j]][j] = 1;
            s.push(make_pair(make_pair(i+a[i][j],j), count+1));
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