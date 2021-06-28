#include<bits/stdc++.h>

using namespace std;
string x;
void input(){
    cin>>x;
}

void solve(){
    stack<int > s;
    int ans = 0; 
    for(int i = 0; i < x.size(); i++){
        if(x[i] == '(') s.push(i);
        else if(x[i] == ')' && !s.empty()) {
            s.pop();
            ans++;
        } 
    }
    cout<<ans*2<<"\n";
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