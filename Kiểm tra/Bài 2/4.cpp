#include<bits/stdc++.h>

using namespace std;

int n;

void input(){
    cin >> n;
}

void print(string a){
    for(int i = 0; i < a.size(); i++) cout<<a[i];
    for(int i = a.size()-1; i >= 0; i--) cout<<a[i];
    cout<<" ";
}

void solve(){
    queue<string> s;
    s.push("4");
    s.push("5");
    while (n--)
    {
        string x = s.front();
        s.pop();

        print(x);

        s.push(x+'4');
        s.push(x+'5');
    }
    cout<<"\n";
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