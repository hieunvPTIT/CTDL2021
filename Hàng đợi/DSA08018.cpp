#include<bits/stdc++.h>

using namespace std;

int n;
void input(){
    cin>>n;
}

void solve(){
    queue<string > q;
    vector<string> result;
    while (1)
    {
        string x = "";
        if(!q.empty()){
            x = q.front(); 
            q.pop();
            if(x.size() > n) break;
            result.push_back(x);
        }
        q.push(x+'6');
        q.push(x+'8');
    }
    cout<<result.size()<<"\n";
    for(int i = 0; i<result.size(); i++)
        cout<<result[i]<<" ";
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