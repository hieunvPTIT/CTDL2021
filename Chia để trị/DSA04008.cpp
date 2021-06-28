#include<iostream>

using namespace std;

int n,k;
int m = 1e9 + 7;
struct Matrix
{
    long long f[2][2];
};

Matrix X;

void input(){
    cin >> n;
}

Matrix operator *(Matrix A, Matrix B){
    Matrix C;
        for(int i = 0; i<=1; i++){
            for(int j = 0; j<= 1; j++){
                C.f[i][j] = 0;
                for(int k=0; k<=1; k++)
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
    X.f[0][0] = 1;
    X.f[0][1] = 1;
    X.f[1][0] = 1;
    X.f[1][1] = 0;

    Matrix B = Pow(X,n);

    cout<<B.f[0][1]<<"\n";
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