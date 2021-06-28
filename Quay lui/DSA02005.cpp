#include<iostream>

using namespace std;

string x, result;
int n; 
int check[10] = {0};

void input(){
    cin >> x;
}

void Try(int i){
    int j;
    for(int j = 0; j < n; j++ ){
        if(!check[j]){
            result[i] = x[j];
            check[j] = 1;
            if(i==n-1) cout << result << " ";
            else Try(i+1);
            check[j] = 0;
        }
    }
}

void solve(){
    for(int i = 0; i < x.size(); i++) check[i] = 0; 
    result = x;
    n = x.size();
    Try(0);
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