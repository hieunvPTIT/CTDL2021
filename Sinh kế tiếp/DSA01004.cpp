#include<iostream>

using namespace std;

int n, k; 
int result[20];

void input(){
    cin >> n >> k;
}

void print(){
    for(int i = 1; i <= k; i++) cout<<result[i];
    cout<<" ";
}

void Try(int i){
    int j;
    for(int j = result[i-1]+1; j <= n-k+i; j++ ){
        result[i] = j;
        if(i==k) print();
        else Try(i+1);
    }
}

void solve(){
    Try(1);
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