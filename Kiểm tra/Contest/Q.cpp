#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n, k;

void input(){
    cin >> n;
}

void print(string x){
    cout<<x;
    reverse(x.begin(), x.end());
    cout<<x<<" ";
}

void solve(){
    queue<string> q;
    q.push("4");
    q.push("5");

    while(n--){
        string x = q.front();
        q.pop();

        print(x);

        q.push(x+'4');
        q.push(x+'5');
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