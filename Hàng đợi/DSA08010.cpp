#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
ll s;
void input(){
    cin>>s;
}

void solve(){
    queue<pair<ll, int> > q;
    map<ll,int> visited;
    visited[s]=1;
    q.push(make_pair(s, 0));
    while (!q.empty())
    {
        pair<ll, int> x = q.front();
        q.pop();

        if(x.first==1){
            cout<<x.second<<"\n";
            return;
        }

        int n = x.first;
        for(int i = 2; i<=sqrt(n);i++){
            if(n%i==0){
                if(!visited[n/i]) {
                    visited[n/i]=1;
                    q.push(make_pair(n/i, x.second+1));
                }
            }
        }

        if(!visited[x.first-1]){
            visited[x.first-1]=1;
            q.push(make_pair(x.first-1, x.second+1));
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