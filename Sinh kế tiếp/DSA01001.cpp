#include<iostream>

using namespace std;

string x; 

void input(){
    cin >> x;
    
}

void solve(){
    int i = x.length() -1;
    while(x[i] == '1' && i >= 0){
        x[i] = '0';
        i--;
    }

    if(i > -1) x[i] = '1';
    cout << x << "\n";
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