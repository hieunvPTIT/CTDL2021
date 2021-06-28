#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

string s;
bool F[1001][1001] = {false};
void input(){
    cin>>s;
}

void solve(){
    memset(F, false, sizeof(F));
    int n = s.size();
    s = ' ' + s;
    int result = 1;
    for(int i = 1; i <= n; i++) F[i][i] = true;
    for(int k = 1; k <= n - 1; k++){
        for(int i = 1; i <= n-k; i++){
            int j = i+k;
            F[i][j] = (F[i+1][j-1] || i==j-1) && s[i] == s[j];
            if(F[i][j]) result=max(result, j-i+1);
        }
    }
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++)
    //         cout<<F[i][j]<<" ";
    //     cout<<"\n";  
    // }
    cout<<result<<"\n"; 
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