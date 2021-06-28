#include<iostream>

using namespace std;

int n,k;
int m = 1e9 + 7;

void input(){
    cin >> n >> k;
}

long long Pow(int a, int b){
    if(b==0) return 1;
    long long x = Pow(a, b/2);
    if(b%2 == 0) return x*x%m;
    return a*(x*x%m)%m;
}

void solve(){
    cout<<Pow(n,k)<<"\n";
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