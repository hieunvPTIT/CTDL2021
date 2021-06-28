#include<bits/stdc++.h>

using namespace std;
string x;
void input(){
    getline(cin,x);
}

void solve(){
    stack<string > s;
    x+=' ';
    int j = 0;
    for(int i = 0; i < x.size(); i++){
        if(x[i]==' '){
            s.push(x.substr(j, i-j));
            j=i+1;
        }
    }
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
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