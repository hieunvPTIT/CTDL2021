#include<iostream>

using namespace std;

int n;
long long F[100], k;

void input(){
    cin >> n >> k;
}

char Fib(int a, long long b){
    if(a==1) return 'A';
    if(a==2) return 'B';

    if(b <= F[a-2]) return Fib(a-2, b);
    return Fib(a-1, b-F[a-2]);
}

void solve(){
    F[0] =0;  F[1] = 1;
    for(int i = 2; i < 93; i++) F[i] = F[i-1] + F[i-2];
    cout<<Fib(n,k)<<"\n";
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