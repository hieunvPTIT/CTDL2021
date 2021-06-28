#include<bits/stdc++.h>

using namespace std;

string a,b;
void input(){
    cin>>a>>b;
}

void solve(){
    int a1=0, a2=0, b1=0, b2=0;
    for(int i = 0; i < a.size(); i++){
        a1 = 10*a1 + (a[i] == '6' ? 5 : (a[i] - '0'));
        a2 = 10*a2 + (a[i] == '5' ? 6 : (a[i] - '0'));
    }
    for(int i = 0; i < b.size(); i++) {
        b1 = 10*b1 + (b[i] == '6' ? 5 : (b[i] - '0'));
        b2 = 10*b2 + (b[i] == '5' ? 6 : (b[i] - '0'));
    }
    cout<<a1+b1<< " " << a2+b2 <<"\n";
}

int main(){
    int t = 1;
    // cin>>t;
    while(t--){
        input();
        solve();
    }
    return 0;
}