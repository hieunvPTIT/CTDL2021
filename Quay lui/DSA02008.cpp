#include<iostream>
#include<vector>

using namespace std;

int n, k, a[10][10], check[10]={0}, cnt=0, sum = 0, x[10];
vector<string> result;
void input(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cin>>a[i][j];
    }
}

void print(){
    for(int i=0; i<result.size(); i++){
        cout<< result[i] <<"\n";
    }
}

string getResult(){
    string s;
    for(int i=0; i<n; i++){
        s+=to_string(x[i])+" ";
    }
    return s;
}

void Try(int i){
    int j;
    for(int j = 0; j < n; j++ ){
        if(!check[j]){
            x[i] = j+1;
            sum+=a[i][j];
            check[j] = 1;
            if(i==n-1 && sum==k) { 
                cnt++; 
                result.push_back(getResult());
            }
            else Try(i+1);
            check[j] = 0;
            sum-=a[i][j];
        }
    }
}

void solve(){
    result.clear();
    for(int i = 0; i < n; i++) check[i] = 0; 
    Try(0);
    cout<< cnt << "\n";
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