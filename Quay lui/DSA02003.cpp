#include<iostream>

using namespace std;

int n, a[15][15], check =0; 
string b;
void input(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j =0; j<n; j++) cin>>a[i][j];
    }
}

void print(int k){
    for(int i = 0; i<k; i++) cout << b[i];
    cout<<" ";
    check=1;
}

void Try(int i, int j, int k){
    if(i==n-1 && j==n-1){
        print(k);
        return;
    }

    if(i+1 < n && a[i+1][j] == 1){
        b[k] = 'D';
        Try(i+1, j, k+1);
    }

    if(j+1 < n && a[i][j+1] == 1){
        b[k] = 'R';
        Try(i, j+1, k+1);
    }
}

void solve(){
    check=0;
    if(a[0][0]) Try(0,0,0);
    if(!check) cout<<"-1";
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