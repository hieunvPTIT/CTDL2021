#include<iostream>

using namespace std;

string a, b;

void input(){
    cin >> a;
}

void solve(){
    b = a;
    for(int i = 1; i<a.size(); i++){
        b[i] = (a[i] -'0')^(a[i-1] - '0') + '0';
    }
    cout<<b<<"\n";
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