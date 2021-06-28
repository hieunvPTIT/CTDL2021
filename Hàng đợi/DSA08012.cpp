#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int l, r;
void input(){
    cin>>l>>r;
}

void solve(){
    queue<pair<ll, vector<int> > > q;
    vector<int> check(6,0);
    for(int i = 1; i<= 5; i++){
        check[i] = 1;
        q.push(make_pair(i, check));
        check[i]=0;
    }
    int ans = 0;
    while (1)
    {
        ll x = q.front().first; 
        vector<int> checkX = q.front().second;
        q.pop();
        if(x>r) break;
        if(l<=x && x<=r) ans++;
        for(int i = 0; i<= 5; i++){
            if(!checkX[i]){
                checkX[i] = 1;
                q.push(make_pair(10*x+i, checkX));
                checkX[i] = 0;
            }
        }
    }
    cout<<ans<<"\n";
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