#include<bits/stdc++.h>

using namespace std;
string x;
void input(){
    cin>>x;
}

void solve(){
    stack<int > s;
    int visited[10] = {1};
    visited[3]=0;
    cout<<distance(visited+1,min_element(visited+1, visited+10))<<"\n";
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