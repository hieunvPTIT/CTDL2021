#include<bits/stdc++.h>

using namespace std;

int n,k, a[105], sum = 0, check = 0, vis[105] = {0};
void input(){
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin>>a[i];
}

void print(){
    cout<<"\n";
}

void Try(int i, int s, vector<int> mv){
    if(check == k) return;
    if(s == sum){ 
        check++;
        for(int l = 0; l < mv.size(); l++) vis[mv[l]] = 1; 
        return;
    }

    for(int j= i+1; j < n; j++){
        if (s+a[j] <= sum && !vis[j])
        {
            mv.push_back(j);
            Try(j, s+a[j], mv);
            mv.pop_back();
        }
    }
    
    
}

void solve(){
    memset(vis, 0 , sizeof(vis));
    sum=0;
    check = 0;
    for(int i = 0; i < n; i++) sum+=a[i];
    if(sum%k!=0) {cout << 0 << "\n"; return;}
    sum/=k;
    vector<int> mv;
    Try(-1,0, mv);
    cout << (check == k ) << "\n";
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