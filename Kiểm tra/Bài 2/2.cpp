#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

struct task
{
    int start, finish;
};

int n;
vector<task> a;

void input(){
    cin >> n;
    a.resize(n);
    for(int i = 0; i<n; i++) cin>>a[i].start >> a[i].finish;
}

bool cmp(task x, task y){
    return x.finish < y.finish;
}

void solve(){
    sort(a.begin(), a.end(), cmp);

    int ans = 1, i=0;
    for(int j = 1; j<n; j++){
        if(a[j].start >= a[i].finish){
            ans++;
            i=j;
        }
    }

    cout<<ans<<"\n";
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