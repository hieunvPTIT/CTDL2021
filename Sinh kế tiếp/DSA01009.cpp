#include<iostream>
#include<vector>

using namespace std;

int n, k;
string x;
vector<string> result;

void input(){
    cin >> n >> k;
}

void check(){
    int check = 0, count = 0;
    for(int i = 0; i < x.size() ; i++) {
        if(x[i] == 'A') {
            count++;
            if(count/k>0) check++;
        }
        else count = 0;
    }
    if(check==1) result.push_back(x);
}

void print(){
    for(int i = 0; i < result.size() ; i++) cout<<result[i]<<"\n";
}

void Try(int i){
    int j;
    for(int j = 'A'; j <= 'B'; j++ ){
        x[i] = j;
        if(i==n-1) check();
        else Try(i+1);
    }
}

void solve(){
    x.resize(n);
    Try(0);
    cout<<result.size()<<"\n";
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