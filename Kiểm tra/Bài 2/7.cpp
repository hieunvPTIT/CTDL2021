#include<bits/stdc++.h>

using namespace std;

string n;
int a[1001][1001]={0};

void input(){
    cin >> n;
}

void solve(){
    memset(a, 0, sizeof(a));
    int size = n.size();
    n = ' ' + n;
    int result = 0;
    for(int i = 1; i<=size; i++) a[i][i] = 1;
    for(int k = 1; k<=size-1; k++){
        for(int i=1; i<=size-k; i++){
            int j = i+k;
            if(n[i] == n[j] && (a[i+1][j-1] || i==j-1))
                a[i][j] = 1;
            if(a[i][j]) result = max(result, j-i+1);
        }
    }
    cout<<result<<"\n";
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