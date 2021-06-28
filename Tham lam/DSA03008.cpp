#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

struct task
{
    int id, deadline, profit;
};

int n;
task a[1005];
void input(){
    cin>>n;
    for(int i = 0; i< n; i++) cin>> a[i].id >> a[i].deadline >> a[i].profit;
}

bool cmp(task x, task y){
    return x.profit > y.profit;
}

void solve(){
    sort(a, a+n, cmp);
    int result = 1, i = 0;
    cout<<result<<"\n"; 
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