#include<iostream>

using namespace std;

int n; 
int check[15] = {0};
char result[15];

void input(){
    cin >> n;
}

void print(){
    for(int i = 1; i <= n; i++) cout<<result[i];
    cout<<" ";
}

void Try(int i){
    int j;
    for(int j = 'A'; j <= 'B'; j++ ){
        result[i] = j;
        if(i==n) print();
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