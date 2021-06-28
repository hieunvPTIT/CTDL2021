#include<iostream>

using namespace std;

int n; 
int result[20];

void input(){
    cin >> n;
}

void print(){
    int check = 1;
    if(result[1] == 1 || result[n] == 0) check = 0;
    for(int i = 1; i < n; i++) if(result[i] == 0 && result[i+1] ==0) check =0;
    if(check){
        for(int i = 1; i <= n; i++) cout<< (result[i] == 0 ? 'H' : 'A');
        cout<<"\n";
    }
}

void Try(int i){
    int j;
    for(int j = 1; j >= 0; j-- ){
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