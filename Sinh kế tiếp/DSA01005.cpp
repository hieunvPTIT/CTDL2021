#include<iostream>

using namespace std;

int n; 
int check[15] = {0}, result[15];

void input(){
    cin >> n;
}

void print(){
    for(int i = 1; i <= n; i++) cout<<result[i];
    cout<<" ";
}

void Try(int i){
    int j;
    for(int j = 1; j <= n; j++ ){
        if(!check[j]){
            result[i] = j;
            check[j] = 1;
            if(i==n) print();
            else Try(i+1);
            check[j] = 0;
        }
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