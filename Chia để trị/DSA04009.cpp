#include<iostream>

using namespace std;

int n,k;
int m = 1e9 + 7;
struct Matrix
{
    long long f[10][10];
};

Matrix X;

void input(){
    cin >> n >> k;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j<n; j++) cin >> X.f[i][j];
    }
}

Matrix operator *(Matrix A, Matrix B){
    Matrix C;
        for(int i = 0; i< n; i++){
            for(int j = 0; j< n; j++){
                C.f[i][j] = 0;
                for(int k=0; k< n; k++)
                    C.f[i][j] = (C.f[i][j] + A.f[i][k]*B.f[k][j] % m) %m;
            }
        }
    return C;
}

Matrix Pow(Matrix a, int b){
    if(b==1) return a;
    Matrix x = Pow(a, b/2);
    if(b%2 == 0) return x*x;
    return a*x*x;
}

void solve(){
    Matrix B = Pow(X,k);
    for(int i = 0; i < n ; i++){
        for(int j = 0; j<n; j++) cout << B.f[i][j]<<" ";
        cout<<"\n";
    }
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