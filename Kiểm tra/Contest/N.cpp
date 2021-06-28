#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

struct task{
    int start, finish;
};

task a[100005];

int n;

void input(){
    cin >> n;
    for(int i = 0; i < n; i++ ) cin>>a[i].start>>a[i].finish;
}

bool cmp(task a, task b){
    return a.finish < b.finish;
}

void solve(){
    sort(a, a+n, cmp);
    ll result = 1, i=0;
    for(int j =1 ; j<n; j++){
        if(a[j].start >= a[i].finish){
            result++;
            i=j;
        }
    }
    cout<<result<<"\n";
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