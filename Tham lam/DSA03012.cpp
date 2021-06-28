#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

string s;
int a[26]={0};
void input(){
    cin>>s;
}

void solve(){
    memset(a, 0, sizeof(a));
    for(int i=0; i<s.size(); i++) a[s[i] - 'a']++;
    if(*max_element(a, a+26)*2<=s.size()+1) cout<<1;
    else cout<<-1;
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