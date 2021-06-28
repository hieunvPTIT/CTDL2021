#include<iostream>

using namespace std;

int n, k, x[20];
void input(){
    cin >> n >> k;
}

void print(){
    for(int i = 1; i <= k; i++) cout<<char('A'+x[i]-1);
    cout<<"\n";
    
}

void Try(int i){
    for(int j = x[i-1]+1; j<= n-k+i; j++){
        x[i] = j;
        if(i==k) print();
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