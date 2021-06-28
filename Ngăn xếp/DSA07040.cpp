#include<bits/stdc++.h>

using namespace std;
string x;
void input(){
    getline(cin,x);
}

void solve(){
    stack<int> s;
    int result = 0, count = 0;
    for(int i = 0; i < x.size(); i++){
        if(x[i] == '(') {
            count++;
            s.push(count);
            cout<<count<<" ";
        }
        else if(x[i] == ')' && !s.empty()) {
            cout<<s.top()<<" ";
            s.pop();
        } 
    }
    cout<<"\n";
}

int main(){
    int t = 1;
    cin>>t;
    cin.ignore();
    while(t--){
        input();
        solve();
    }
    return 0;
}