#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll s, t;
void input(){
    cin>>s>>t;
}

void solve(){
    queue<pair<ll, int> > q;
    int visited[200005] = {0};
    visited[s]=1;
    q.push(make_pair(s, 0));
    while (!q.empty())
    {
        pair<ll, int> x = q.front();
        q.pop();

        if(x.first==t){
            cout<<x.second<<"\n";
            return;
        }

        if(!visited[x.first-1]){
            visited[x.first-1]=1;
            q.push(make_pair(x.first-1, x.second+1));
        }

        if(!visited[x.first*2] && x.first<t){
            visited[x.first*2]=1;
            q.push(make_pair(x.first*2, x.second+1));
        }
    }
}

int main(){
    int t = 1;
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}