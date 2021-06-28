#include<bits/stdc++.h>

using namespace std;
string x;
void input(){
    cin>>x;
}

void solve(){
    stack<int > s;
    int open = 0, close = 0; 
    for(int i = 0; i < x.size(); i++){
        if(x[i] == '(') {
            open++;
            s.push(i);
        }
        else if(x[i] == ')') {
            if(!s.empty()){
                open--;
                s.pop();
            } else close++;
        } 
    }
    cout << open / 2 + close / 2 + 2 * (open % 2 == 1)<<"\n";
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