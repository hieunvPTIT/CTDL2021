#include<iostream>

using namespace std;

long long n;
int m = 123456789;

void input(){
    cin >> n;
}

long long Pow(int a, long long b){
    if(b==0) return 1;
    long long x = Pow(a, b/2);
    if(b%2 == 0) return x*x%m;
    return a*(x*x%m)%m;
}

void solve(){
    cout<<Pow(2,n-1)<<"\n";
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