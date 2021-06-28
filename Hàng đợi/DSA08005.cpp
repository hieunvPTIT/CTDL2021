#include<bits/stdc++.h>

using namespace std;

int n;
void input(){
    cin>>n;
}

void solve(){
    queue<string > q;
    q.push("1");
    while (n--)
    {
        string x = q.front(); 
        q.pop();
        cout<<x<<" ";
        q.push(x+'0');
        q.push(x+'1');
    }
    cout<<"\n";
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