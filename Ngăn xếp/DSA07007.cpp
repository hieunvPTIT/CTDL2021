#include<bits/stdc++.h>

using namespace std;
string x,y;
void input(){
    cin>>x>>y;
}

string reduce(string x){
    stack<int > s;
    int ans = 0; 
    for(int i = 0; i < x.size(); i++){
        if(x[i] == '(') s.push(i);
        else if(x[i] == ')' && !s.empty()) {
            int top = s.top();
            s.pop();

            if(top>0 && x[top-1] == '-')
                for (int j = top; j < i; j++)
                {
                    if (x[j] == '+') x[j] = '-';
                    else if (x[j] == '-') x[j] = '+';
                }
        } 
    }

    string tmp = "";

    for (int i = 0; i < x.size(); i++)
        if (x[i] != ')' && x[i] != '(')
            tmp += x[i];
    
    return tmp;
}

void solve(){
    cout<<(reduce(x) == reduce(y) ? "YES" : "NO")<<"\n";
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