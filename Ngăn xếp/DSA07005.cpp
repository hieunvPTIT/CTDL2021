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

    for (int i = 0; i < x.size(); i++)
        if (x[i] != ')' && x[i] != '(')
            cout << x[i];
    cout << "\n";
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