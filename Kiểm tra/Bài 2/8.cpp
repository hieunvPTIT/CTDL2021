#include<bits/stdc++.h>

using namespace std;
string x;
void input(){
    cin>>x;
}

void solve(){
    stack<int > s;
    int result = 0;
    for(int i = 0; i < x.size(); i++){
        int top = 0;
        if(!s.empty()) top = s.top();
        if(x[i] == '(') s.push(top+1);
        else if(x[i] == ')' && !s.empty()) {
            result=max(result,s.top());
            // cout<<s.top()<<" ";
            s.pop();
        } 
    }
    if(!s.empty()){
        cout<<-1<<"\n";
        return;
    } 
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