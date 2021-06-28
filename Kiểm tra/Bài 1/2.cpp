#include<iostream>
#include<vector>
using namespace std;

int n; 
int check[100] = {0};
string a, b;
vector<string> C;
vector<string> D;

void input(){
    cin >> n;
}

void print(){
    for(int i = 0; i < C.size(); i++){
        for(int j = 0; j< D.size(); j++){
            cout<<C[i]<<D[j]<<"\n";
        }
    }
}

void TryCharacter(int i){
    for(int j = 1; j <= n; j++ ){
        if(!check[j]){
            b[i] = 'A' + j - 1;
            check[j] = 1;
            if(i==n) C.push_back(b);
            else TryCharacter(i+1);
            check[j] = 0;
        }
    }
}

void Try(int i){
    for(int j = 1; j <= n; j++ ){
        a[i] = j + '0';
        if(i==n) D.push_back(a);
        else Try(i+1);
    }
}

void solve(){
    a.resize(n+1);
    b.resize(n+1);
    TryCharacter(1);
    Try(1);
    print();
};

int main(){
    int t = 1;
    // cin >> t; 
    while(t--){
        input();
        solve();
    }
    return 0;
}