#include<bits/stdc++.h>

using namespace std;

int n, a[15][15], b[15][15] = {0}; 
vector<vector<char> > result;
vector<char> x;
void input(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++) {
            cin>>a[i][j];
        }
    }
}

void print(){
    cout<<result.size()<<" ";
    for(int i = 0; i<result.size(); i++) {
        for(int j = 0; j<result[i].size(); j++) cout<< result[i][j];
        cout<<" ";
    }
    cout<<"\n";
}

void Try(int i, int j, int k){
    if(i==n-1 && j==n-1){
        result.push_back(x);
        return;
    }

    if(i+1 < n && a[i+1][j] == 1 && b[i+1][j] == 0){
        b[i+1][j] = 1;
        x.push_back('D');
        Try(i+1, j, k+1);
        b[i+1][j] = 0;
        x.pop_back();
    }

    if(j+1 < n && a[i][j+1] == 1 && b[i][j+1] == 0){
        b[i][j+1] = 1;
        x.push_back('R');
        Try(i, j+1, k+1);
        b[i][j+1] = 0;
        x.pop_back();
    }

    if(a[i-1][j] == 1 && b[i-1][j] == 0){
        b[i-1][j] = 1;
        x.push_back('U');
        Try(i-1, j, k+1);
        b[i-1][j] = 0;
        x.pop_back();
    }

    if(a[i][j-1] == 1 && b[i][j-1] == 0){
        b[i][j-1] = 1;
        x.push_back('L');
        Try(i, j-1, k+1);
        b[i][j-1] = 0;
        x.pop_back();
    }
}

void solve(){
    result.clear();
    memset(b,0,sizeof(b));
    if(a[0][0]) {
        b[0][0] = 1;
        Try(0,0,0);
    }
    sort(result.begin(), result.end());
    if(!result.size()) cout<<"-1"<<"\n";
    else print();
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