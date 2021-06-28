#include<iostream>

using namespace std;

long long n, N;
int m = 1e9 + 7;

void input(){
    cin >> n; N = n;
}

long long Pow(long long a, long long b){
    if(b==0) return 1;
    long long x = Pow(a, b/2);
    if(b%2 == 0) return x*x%m;
    return a*(x*x%m)%m;
}

void solve(){
    long long k = 0, tmp;
    while(n > 0){
        tmp = n % 10;
        k = k * 10 + tmp;
        n = n / 10;
    }
    cout<<Pow(N,k)<<"\n";
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