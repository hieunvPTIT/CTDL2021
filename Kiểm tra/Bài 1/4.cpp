#include<iostream>

using namespace std;

int n; 
int check[15] = {0}, result[15];

void input(){
    cin >> n;
}

void print(){
    int check = 1;
    for(int i = 1; i <= n-1; i++) if(result[i] == result[i+1] - 1 || result[i] == result[i+1] + 1) check = 0;
    if(check){
        for(int i = 1; i <= n; i++) cout<<result[i];
        cout<<"\n";
    }
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