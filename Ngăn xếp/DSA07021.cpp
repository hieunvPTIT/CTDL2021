#include<bits/stdc++.h>

using namespace std;
string x;
void input(){
    cin>>x;
}

void solve(){
    stack<int > s;
    vector<int> visited(x.size(), 0);
    int result = 0;
    for(int i = 0; i < x.size(); i++){
        if(x[i] == '(') s.push(i);
        else if(x[i] == ')' && !s.empty()) {
            visited[s.top()] = 1;
            visited[i] = 1;
            s.pop();
        } 
    }
    int count = 0, ans = 0; 
    for (int i = 0; i < visited.size(); i++){
        count = visited[i] ? count + 1 : 0;
        ans = max(ans, count);
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