#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int s, t;

int prime[10001] = {0};

void sieve(){
    prime[0] = prime[1] = 1;
    for(int i = 2; i <= sqrt(10001); i++){
        if(!prime[i]){
            for(int j = i*i; j<=10001; j+=i)
                prime[j]=1;
        }
    }
}

void input(){
    cin>>s>>t;
}

int getNextNumber(int x,int n,int t)
{
    if(t==1&&n==0) return 0;
    if(t==1) return (x-(x/1000)*1000+n*1000);
    if(t==2) return (x-((x/100)%10)*100+n*100);
    if(t==3) return (x-((x%100)/10)*10+n*10);
    if(t==4) return (x-x%10+n);

    return 0;
}

void solve(){
    queue<pair<int, int> > q;
    map<int,int> visited;
    visited[s]=1;
    q.push(make_pair(s, 0));
    while (!q.empty())
    {
        pair<int, int> x = q.front();
        q.pop();

        if(x.first==t){
            cout<<x.second<<"\n";
            return;
        }

        int n = x.first;
        for(int i = 1; i <= 4; i++){
            for(int j = 0; j <= 9; j++){
                int u = getNextNumber(n,j,i);
                if(!u) continue;
                if(!visited[u] && !prime[u]){
                    visited[u] = 1;
                    q.push(make_pair(u,x.second+1));
                }
            }
        }
    }
}

int main(){
    int t = 1;
    sieve();
    cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}