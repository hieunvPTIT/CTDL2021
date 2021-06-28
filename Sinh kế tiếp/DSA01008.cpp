#include<iostream>

using namespace std;

int n, k; 
int result[20] = {0};

void input(){
    cin >> n >> k;
}

void print(){
    int sum = 0;
    for(int i = 1; i <= n; i++) sum+=result[i];
    if(sum == k){
        for(int i = 1; i <= n; i++) cout<<result[i];
        cout<<"\n";
    }
}

void Try(int i){
    int j;
    for(int j = 0; j <= 1; j++ ){
        result[i] = j;
        if(i==n) print();
        else Try(i+1);
    }
}

void solve(){
    Try(1);
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