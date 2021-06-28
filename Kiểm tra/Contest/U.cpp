#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

string x;

void input(){
    cin >> x;
}

void solve(){
    stack<int> s;
    int result = 0;
    for(int i=0; i<x.size(); i++){
        int top = 0;
        if(!s.empty()) top = s.top();
        if(x[i] == '('){
            s.push(top+1);
        }
        if(x[i]==')' && !s.empty()) {
            result=max(result, s.top());
            s.pop();
        }
    }
    if(!s.empty()) cout<<-1<<"\n";
    else cout<<result<<"\n";
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