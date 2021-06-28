#include<iostream>
#include<vector>

using namespace std;

int n; 
int check[15] = {0};

vector<string> result;
string x;
void input(){
    cin >> n;
}

void print(){
    for(int i = result.size() - 1; i >= 0; i--) {
        cout<< result[i] << " ";
    }
    cout<<"\n";
}

void Try(int i){
    int j;
    for(int j = 1; j <= n; j++ ){
        if(!check[j]){
            x[i] = j + '0';
            check[j] = 1;
            if(i==n-1) result.push_back(x);
            else Try(i+1);
            check[j] = 0;
        }
    }
}

void solve(){
    x.resize(n);
    result.clear();
    Try(0);
    print();
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